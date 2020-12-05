/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 23:25:05 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/26 12:52:08 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int nb, int ndigits);
int		modulo(int nb);
long	power(int a, int b);
int		number_of_digits(int nb);

void	ft_putnbr(int nb)
{
	int ndigits;

	ndigits = number_of_digits(nb);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
			write(1, "-", 1);
		print_number(nb, ndigits);
	}
}

void	print_number(int nb, int ndigits)
{
	int		mnb;
	char	digits[ndigits];
	int		i;

	i = ndigits;
	mnb = modulo(nb);
	while (i > 0)
	{
		i = i - 1;
		digits[i] = (mnb % 10);
		mnb = mnb / 10;
		digits[i] = digits[i] + '0';
	}
	write(1, &digits, ndigits);
}

int		number_of_digits(int nb)
{
	int		mnb;
	int		ndigits;
	long	teste;
	int		i;

	mnb = modulo(nb);
	ndigits = 1;
	teste = 10;
	i = 1;
	while (i == 1)
	{
		if (mnb >= teste)
		{
			ndigits++;
			teste = teste * 10;
		}
		else
			i = 0;
	}
	return (ndigits);
}

int		modulo(int nb)
{
	int nbp;

	if (nb < 0)
	{
		nbp = -nb;
	}
	else
	{
		nbp = nb;
	}
	return (nbp);
}
