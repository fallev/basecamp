/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:24:35 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/26 17:53:05 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int i;
	int temp;
	int test;

	test = 0;
	while (test == 0)
	{
		i = 0;
		n = 0;
		while (n < (size - 1))
		{
			if (tab[(n + 1)] < tab[n])
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
