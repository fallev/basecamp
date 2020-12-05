/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:39:45 by faugusto          #+#    #+#             */
/*   Updated: 2020/11/27 11:38:00 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	print_number(int nb, int ndigits);
int		number_of_digits(int nb);

int		main(void)
{
	ft_putnbr(-1);
	ft_putnbr(-10);
	ft_putnbr(-345);
	ft_putnbr(-4501);
	ft_putnbr(-23045);
	ft_putnbr(-2147483648);
	ft_putnbr(0);
	ft_putnbr(2);
	ft_putnbr(24);
	ft_putnbr(300);
	ft_putnbr(5478);
	ft_putnbr(15478);
	ft_putnbr(2147483647);
}
