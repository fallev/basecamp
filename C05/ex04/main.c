/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:03:07 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/04 21:12:00 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{	
	printf("fibonacci de -10 = %d\n", ft_fibonacci(-10));
	printf("fibonacci de -2 = %d\n", ft_fibonacci(-2));
	printf("fibonacci de 0 = %d\n", ft_fibonacci(0));
	printf("fibonacci de 1 = %d\n", ft_fibonacci(1));
	printf("fibonacci de 2 = %d\n", ft_fibonacci(2));
	printf("fibonacci de 3 = %d\n", ft_fibonacci(3));
	printf("fibonacci de 4 = %d\n", ft_fibonacci(4));
	printf("fibonacci de 5 = %d\n", ft_fibonacci(5));
	printf("fibonacci de 15 (deve ser 610)= %d\n", ft_fibonacci(15));
	printf("fibonacci de 30 (deve ser 832040)= %d\n", ft_fibonacci(30));
}