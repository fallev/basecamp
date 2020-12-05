/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 02:48:14 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/02 01:49:04 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int x;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		x = tab[i];
		tab[i] = tab[size];
		tab[size] = x;
		i++;
		size--;
	}
}
