/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 19:48:51 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/24 20:39:44 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		number_of_digits(int nb);

void	ft_print_combn(int n)
{
	int		digits;
	int		i;
	int a;

	a = 0;
	digits = number_of_digits(n);
	while (a < 10 || (a + digits) < 10)
	{
		i = 0;	
		while (i <= digits)
		{
			int ai;

			ai = a + i;
			write(1, &ai, 1);
			i++;	
		}
		write(1, ", ", 2);
		a++;
	}
}

int		number_of_digits(int nb)
{
	int		ndigits;
	long	teste;
	int		i;

	ndigits = 1;
	teste = 10;
	i = 1;
	while (i == 1)
	{
		if (nb >= teste)
		{
			ndigits++;
			teste = teste * 10;
		}
		else
			i = 0;
	}
	return (ndigits);
}

