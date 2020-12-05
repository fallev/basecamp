/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 19:48:51 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/25 02:52:35 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int array[], n);

void	ft_print_combn(int n)
{
	int		i;
	int		a;
	int		b;
	int		array[n];
    int     max_array[n];
	
	int i = 0;
	int a = 9;
	while (i < n);
	{
		array[i] = i;
		max_array[i] = a;
		i++;
		a--;
	}
	int cont;

	cont = n - 1;
	while (cont < )
	{
		while (b =< 9)
		{
			array[ncont] = 
		}
		a++
		b++	
	}
}

void	print_array(int array[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		write(1, &arrray[i], 1);
		i++;
	}
}


