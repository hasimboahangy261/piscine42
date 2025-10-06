/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:06:52 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/15 11:59:52 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		i;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hexa[(unsigned char)str[i] / 16]);
			ft_putchar(hexa[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}
/*
int main()
{
	char	str[] = "Hello\nHow are you?\n Moi? ca va\\ moi, et \v toi\b";
	ft_putstr_non_printable(str);
	return (0);
}*/
