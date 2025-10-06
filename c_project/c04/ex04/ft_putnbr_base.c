/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 04:10:14 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/15 16:23:57 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_base(char *base)
{
	int	i;
	int	j;
	int	is_base;

	i = 0;
	is_base = 1;
	while (base[i] != '\0')
	{
		if (base[i] < 33 || base[i] > 126)
			is_base = 0;
		if (base[i] == '+' || base[i] == '-')
			is_base = 0;
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i] == base [i + j])
				is_base = 0;
			j++;
		}
		i++;
	}
	if (i <= 1)
		is_base = 0;
	return (is_base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (ft_is_base(base))
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n > ft_strlen(base) - 1)
		{
			ft_putnbr_base(n / ft_strlen(base), base);
			n %= ft_strlen(base);
		}
		ft_putchar(base[n]);
	}
}
/*
int main()
{
	char	*decimal = "0123456789";
	char	*binary = "01";
	char	*hexadecimal = "0123456789ABCDEF";
	char	*poneyvif = "poneyvif";
	int	number;

	number = -3469;

	ft_putnbr_base(number, decimal);
	write(1, "\n", 1);
	ft_putnbr_base(number, binary);
	write(1, "\n", 1);
	ft_putnbr_base(number, hexadecimal);
	write(1, "\n", 1);
	ft_putnbr_base(number, poneyvif);
	write(1, "\n", 1);
	return(0);
}*/
