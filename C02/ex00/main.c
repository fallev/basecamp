/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:20:59 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/01 23:57:41 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main (void)
{
	char a[6] = "fabio";
	char b[5] = "oioo";

	ft_strcpy(b, a);
	printf("%s\n", b);

}
