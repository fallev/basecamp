/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:46:43 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/02 02:28:14 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k <= i)
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
