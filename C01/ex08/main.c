/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:24:31 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/26 17:33:44 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int n = 8;
	int tab[8] = {4, 6, 3, 0, 2147483647, -1, 2, -2147483648};
	int i = 0;

	while(i < n)
	{
      printf("%d \n", tab[i]);
	  i++;
	}
	i =0;
	ft_sort_int_tab(tab, n);
	printf("---- \n");
	while(i < n)
	{
      printf("%d \n", tab[i]);
	  i++;
	}
}