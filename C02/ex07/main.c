/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:10:04 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/01 00:11:25 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char	ft_strupcase(char *str);

int main(void)
{
	char a[16] = "alou0ola\n teste";
	char b[8] = "kuhZa\tA";
	char c[19]= "oi amigo tudo bem?";

	ft_strupcase(a);
	ft_strupcase(b);
	ft_strupcase(c);

	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
}