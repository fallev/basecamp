/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:46:43 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/02 02:49:35 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	tamanho(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int k;
	unsigned int dest_size;
	unsigned int src_size;

	dest_size = tamanho(dest);
	src_size = tamanho(src);
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (j < (size - 1) && src[k] != '\0')
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j] = '\0';
	if (size < dest_size)
	{
		return (size + src_size);
	}
	return (dest_size + src_size);
}

unsigned int	tamanho(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
