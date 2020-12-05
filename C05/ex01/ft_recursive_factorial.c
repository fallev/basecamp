/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:52:20 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/04 17:16:03 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	fatorial;

	if (nb < 0)
	{
		return (0);
	}
	fatorial = 1;
	if (nb > 0)
	{
		fatorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (fatorial);
}
