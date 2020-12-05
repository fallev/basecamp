/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:10:04 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/30 21:23:00 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char *a = "alou ola teste";
	char *b = "kjshzfuhZaA";
	char *c = "97ysdhd7d";

	int d = ft_str_is_alpha(a);
	int e = ft_str_is_alpha(b);
	int f = ft_str_is_alpha(c);

	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
}