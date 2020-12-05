/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:10:04 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/30 22:42:08 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char *a = "alou0ola\n teste";
	char *b = "kuhZaA\t";
	char *c = "oi amigo tudo bem?";

	int d = ft_str_is_printable(a);
	int e = ft_str_is_printable(b);
	int f = ft_str_is_printable(c);

	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
}