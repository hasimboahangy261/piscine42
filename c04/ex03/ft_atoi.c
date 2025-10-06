/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 03:20:03 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/16 12:20:57 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (sign * number);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char	*nbr = "	---+--+12  34ab567";
	printf("ft_atoi %d\n", ft_atoi(nbr));
	printf("atoi %d\n", atoi(nbr));
	char	*nbr2 = "--7548";
	printf("ft_atoi nbr2 :%d\n", ft_atoi(nbr2));
	printf("atoi nbr2 : %d\n", atoi(nbr2));
	//printf("%s\n", nbr);
	return (0);
}
