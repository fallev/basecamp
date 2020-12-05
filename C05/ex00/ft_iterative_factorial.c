/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:52:20 by faugusto          #+#    #+#             */
/*   Updated: 2020/12/04 17:09:43 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	fatorial;

	if (nb < 0)
	{
		return (0);
	}
	fatorial = 1;
	while (nb > 0)
	{
		fatorial = nb * fatorial;
		nb--;
	}
	return (fatorial);
}
