/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:45:20 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/04 20:51:28 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int main (void)
{
	printf("Número -5 = %d\n", ft_is_prime(-5));
	printf("Número 0 = %d\n", ft_is_prime(0));
	printf("Número 1 = %d\n", ft_is_prime(1));
	printf("Número 2 = %d\n", ft_is_prime(2));
	printf("Número 5 = %d\n", ft_is_prime(5));
	printf("Número 10 = %d\n", ft_is_prime(10));
	printf("Número 993 (não é primo) = %d\n", ft_is_prime(993));
	printf("Número 997 (é primo) = %d\n", ft_is_prime(997));
}