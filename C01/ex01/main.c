/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:22:08 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/25 22:11:00 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int *********a;
	int ********b;
	int *******c;
	int ******d;
	int *****e;
	int ****f;
	int ***g;
	int **h;
	int *i;
	int j;

	j = 10;
	a = &b;
	b = &c;
	c = &d;
	d = &e;
	e = &f;
	f = &g;
	g = &h;
	h = &i;
	i = &j;

	ft_ultimate_ft(a);
	printf("%d\n", j);
}
