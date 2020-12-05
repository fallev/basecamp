/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:21:47 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/04 17:45:51 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int main(void)
{
	printf("2 elevado a 2 = %d\n", ft_iterative_power(2, 2));
	printf("2 elevado a 0 = %d\n", ft_iterative_power(2, 0));
	printf("2 elevado a -2 = %d\n", ft_iterative_power(2, -2));
	printf("0 elevado a 0 = %d\n", ft_iterative_power(0, 0));
	printf("-2 elevado a 2 = %d\n", ft_iterative_power(-2, 2));
	printf("-2 elevado a 3 = %d\n", ft_iterative_power(-2, 3));
	printf("10 elevado a 2 = %d\n", ft_iterative_power(10, 2));
}