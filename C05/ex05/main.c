/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:27:58 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/04 20:38:37 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	printf("raiz de -5 = %d\n", ft_sqrt(-5));
	printf("raiz de 0 = %d\n", ft_sqrt(0));
	printf("raiz de 2 = %d\n", ft_sqrt(2));
	printf("raiz de 4 = %d\n", ft_sqrt(4));
	printf("raiz de 10 = %d\n", ft_sqrt(10));
	printf("raiz de 50 = %d\n", ft_sqrt(50));
	printf("raiz de 100 = %d\n", ft_sqrt(100));
}