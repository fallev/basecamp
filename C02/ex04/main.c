/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:10:04 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/30 22:02:47 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char *a = "alou0ola9teste";
	char *b = "kuhZaA";
	char *c = "khgdfdkyza";

	int d = ft_str_is_lowercase(a);
	int e = ft_str_is_lowercase(b);
	int f = ft_str_is_lowercase(c);

	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
}