/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:46:43 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/02 22:33:49 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (to_find[i] != '\0')
		i++;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			k = 0;
			while (to_find[k] == str[j + k])
			{
				if (k == (i - 1))
					return (&str[j]);
				k++;
			}
		}
		j++;
	}
	return (0);
}
