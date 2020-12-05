/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:10:04 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/30 21:23:08 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char *a = "alou ola teste";
	char *b = "k7810uhZaA";
	char *c = "97324350";

	int d = ft_str_is_numeric(a);
	int e = ft_str_is_numeric(b);
	int f = ft_str_is_numeric(c);

	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
}