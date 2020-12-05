/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:14:09 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/03 03:02:39 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    ft_atoi(char *str);

int    main(void)
{
    printf("String: %s\t\tOriginal: %d\t\tExercicio: %d\n", "-21474836487", atoi("-21474836487"), ft_atoi("-21474836487"));
    printf("String: %s\t\t\tOriginal: %d\t\tExercicio: %d\n", "abc", atoi("abc"), ft_atoi("abc"));
    printf("String: %s\t\tOriginal: %d\tExercicio: %d\n", "-2147483648", atoi("-2147483648"), ft_atoi("-2147483648"));
    printf("String: %s\t\tOriginal: %d\tExercicio: %d\n", "2147483647", atoi("2147483647"), ft_atoi("2147483647"));
    printf("String: %s\t\tOriginal: %d\t\tExercicio: %d\n", "   +1234a567", atoi("   +1234a567"), ft_atoi("   +1234a567"));
    printf("String: %s\t\tOriginal: %d\t\tExercicio: %d\n", "  -1234a567", atoi("  -1234a567"), ft_atoi("  -1234a567"));
    printf("String: %s\t\tOriginal: %d\t\tExercicio: %d\n", "    -1234a567", atoi("    -1234a567"), ft_atoi("    -1234a567"));
    printf("String: %s\t\tOriginal: %d\t\tExercicio: %d\n", "  -+-1234a567", atoi("  -+-1234a567"), ft_atoi("  -+-1234a567"));
    printf("String: %s\tOriginal: %d\t\tExercicio: %d\n", " ---+--+1234ab567", atoi(" ---+--+1234ab567"), ft_atoi(" ---+--+1234ab567"));
    printf("String: %s\t\t\tOriginal: %d\t\tExercicio: %d\n", "", atoi(""), ft_atoi(""));
    return (0);
}