/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:16:34 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/22 21:52:16 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char d_0, char d_1, char d_2);

void	ft_print_comb(void)
{
	char d_0;
	char d_1;
	char d_2;

	d_0 = '0';
	d_1 = '1';
	d_2 = '2';
	while (d_0 <= '7')
	{
		while (d_1 <= '8')
		{
			while (d_2 <= '9')
			{
				print_number(d_0, d_1, d_2);
				d_2 = d_2 + 1;
			}
			d_1 = d_1 + 1;
			d_2 = d_1 + 1;
		}
		d_0 = d_0 + 1;
		d_1 = d_0 + 1;
		d_2 = d_1 + 1;
	}
}

void	print_number(char d_0, char d_1, char d_2)
{
	if (d_0 == '7' && d_1 == '8' && d_2 == '9')
	{
		write(1, "789", 3);
	}
	else
	{
		write(1, &d_0, 1);
		write(1, &d_1, 1);
		write(1, &d_2, 1);
		write(1, ", ", 2);
	}
}
