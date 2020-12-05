/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:10:04 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/30 22:03:56 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char *a = "alou0ola teste";
	char *b = "kuhZaA";
	char *c = "AZKUDF";

	int d = ft_str_is_uppercase(a);
	int e = ft_str_is_uppercase(b);
	int f = ft_str_is_uppercase(c);

	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
}