/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 02:48:26 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/26 04:17:28 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int n = 10;
	int a[n];
	int i;

	i = 0;
	while (i < n)
	{
		a[i] = (i + 1);
		i++;
	}
	i = 0;
	ft_rev_int_tab(a, n);
	while (i < n)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
