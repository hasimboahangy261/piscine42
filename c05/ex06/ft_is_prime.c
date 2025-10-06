/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:26:33 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/17 11:43:48 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	int a = ft_is_prime(2);
	int b = ft_is_prime(19);
	int c = ft_is_prime(7);
	int d = ft_is_prime(-4);
	int e = ft_is_prime(56);
	printf("Is 2 prime? %d\n", a);
	printf("Is 19 prime ? %d\n", b);
	printf("Is 7 prime? %d\n", c);
	printf("Is -4 prime? %d\n", d);
	printf("Is 56 prime? %d\n", e);
	return (0);
}*/
