/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:31:01 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/15 18:09:28 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c);
/*
int main()
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(2147423647);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	return (0);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// long int, we are going to use it.
void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}
