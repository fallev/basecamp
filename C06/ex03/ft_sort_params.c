/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 20:00:23 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/03 23:22:53 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_sort_int_tab(char **tab, int size);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**tab2;

	tab2 = &argv[1];
	ft_sort_int_tab(tab2, (argc - 1));
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		n;
	int		i;
	char	*temp;
	int		test;

	test = 0;
	while (test == 0)
	{
		i = 0;
		n = 0;
		while (n < (size - 1))
		{
			if (ft_strcmp(tab[(n + 1)], tab[n]) < 0)
			{
				temp = tab[n];
				tab[n] = tab[(n + 1)];
				tab[(n + 1)] = temp;
				i++;
			}
			n++;
		}
		if (i == 0)
			test = 1;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
