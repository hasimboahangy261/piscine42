/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:46:20 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/17 11:20:37 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	int a = 25;
	printf("square of 25 : %d\n", ft_sqrt(a));
	printf("square of 4 : %d\n", ft_sqrt(4));
	printf("square of 3 : %d\n", ft_sqrt(3));
	printf("square of -3 : %d\n", ft_sqrt(-3));
	return (0);
}*/
