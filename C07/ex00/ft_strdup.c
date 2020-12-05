/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:50:08 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/05 00:44:50 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *src);

char			*ft_strdup(char *src)
{
	char			*copy;
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(src);
	copy = malloc(size * sizeof(char));
	i = 0;
	while (i <= size)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

unsigned int	ft_strlen(char *src)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
