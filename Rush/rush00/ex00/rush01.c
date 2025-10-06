/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:33:00 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/07 12:59:59 by ftianjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_line(int x)
{
	int	i;

	i = 2;
	ft_putchar('/');
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	print_last_line(int x)
{
	int	i;

	i = 2;
	if (x >= 1)
	{
		ft_putchar('\\');
		while (i < x)
		{
			ft_putchar('*');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('/');
		}
		ft_putchar('\n');
	}
}

void	print_between(int x)
{
	int	i;

	i = 2;
	ft_putchar('*');
	while (i < x)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 2;
	if (x <= 0 || y <= 0)
	{
		write(1, "veuillez entrer un nombre positif.", 35);
	}
	else
	{
		print_first_line(x);
		while (j < y)
		{
			if (y > 2)
			{
				print_between(x);
			}
			j++;
		}
		if (y >= 2)
		{
			print_last_line(x);
		}
	}
}
