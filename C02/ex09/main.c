/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:10:04 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/01 03:14:32 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char a[16] = "alou0ola\n teste";
	char b[8] = "kuhZa\tA";
	char c[19]= "oi aMigo tudo bem?";
	char d[58] = "oi, tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um:";

	ft_strcapitalize(a);
	ft_strcapitalize(b);
	ft_strcapitalize(c);
	ft_strcapitalize(d);

	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
	printf("%s\n", d);
}