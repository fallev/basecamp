/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:50:39 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/05 00:29:40 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src);

int        main(void)
{
    char *dest;
    char src[6] = "texto";

    dest = ft_strdup(src);
    src[0] = 'b';
    printf("%s\n", src);
    printf("%s\n", dest);
}