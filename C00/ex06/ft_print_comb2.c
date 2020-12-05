/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:06:08 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/22 22:57:47 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_two_chars(int n);
void	print_text(int n_0, int n_1);

void	ft_print_comb2(void)
{
	int n_0;
	int n_1;

	n_0 = 0;
	n_1 = 1;
	while (n_0 <= 98)
	{
		while (n_1 <= 99)
		{
			if (n_0 < n_1)
			{
				print_text(n_0, n_1);
			}
			n_1 = n_1 + 1;
		}
		n_0 = n_0 + 1;
		n_1 = n_0 + 1;
	}
}

void	print_text(int n_0, int n_1)
{
	print_two_chars(n_0);
	write(1, " ", 1);
	print_two_chars(n_1);
	if (n_0 == 98 && n_1 == 99)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	print_two_chars(int n)
{
	int d1;
	int d2;

	d1 = (n / 10) + '0';
	d2 = (n % 10) + '0';
	write(1, &d1, 1);
	write(1, &d2, 1);
}
