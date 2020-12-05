/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:27:42 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/01 03:22:36 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n);

int		main (void)
{
	char a[6] = "fabio";
	char b[4];
	int n = 10;
	
	/* strncpy(b, a, n);
	printf("original%s\n", b);*/
	ft_strncpy(b, a, n);
	printf("%s\n", b);
	int i = 0;
	while(i < n)
	{
		if (b[i] == '\0')
			printf(" isso mesmo %c\n", b[i]);
		i++;
	}
}