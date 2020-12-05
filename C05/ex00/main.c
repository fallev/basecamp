/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:56:58 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/04 17:07:16 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb);

int main(void)
{
	printf("fat -2147483648 = %d\n", ft_iterative_factorial(-2147483648));
	printf("fat -12 = %d\n", ft_iterative_factorial(-12));
	printf("fat -10 = %d\n", ft_iterative_factorial(-10));
	printf("fat 0 = %d\n", ft_iterative_factorial(0));
	printf("fat 2 = %d\n", ft_iterative_factorial(2));
	printf("fat 3 = %d\n", ft_iterative_factorial(3));
	printf("fat 10 = %d\n", ft_iterative_factorial(10));
	printf("fat 19 = %d\n", ft_iterative_factorial(19));
	printf("fat 20 = %d\n", ft_iterative_factorial(20));	
 }