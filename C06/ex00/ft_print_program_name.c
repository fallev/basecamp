/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:04:02 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/05 02:27:19 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[argc -1][i] != '\0')
	{
		write(1, &argv[argc-1][i], malloc(sizeof(char)));
		i++;
	}
	write(1, "\n", 1);
}
