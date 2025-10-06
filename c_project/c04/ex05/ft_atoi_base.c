/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:10:14 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/16 13:26:45 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (base[i])
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

int	check_index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_pre_digit(char *str, int	*ptr_sign)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	*ptr_sign = sign;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	number;
	int	base_len;

	i = 0;
	sign = 1;
	number = 0;
	base_len = ft_strlen(base);
	if (base_len >= 2)
	{
		i = ft_pre_digit(str, &sign);
		while (str[i] != '\0' && ft_is_base(base))
		{
			if (check_index_base(str[i], base) == (-1))
				return (0);
			number *= base_len;
			number += check_index_base(str[i], base);
			i++;
		}
		return (sign * number);
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("Base 10 :%d\n", ft_atoi_base(" ++-++--10551shfg13", "0123456789"));
	printf("Base binary :%d\n", ft_atoi_base("-3469", "01"));
	printf("Base hexa :%d\n", ft_atoi_base("-2a", "0123456789abcdef"));

	return (0);
}*/
