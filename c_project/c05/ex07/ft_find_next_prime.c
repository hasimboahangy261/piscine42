/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:23:29 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/17 12:51:00 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("Next prime af 7 is : %d\n", ft_find_next_prime(7));
	printf("Next prime af 15 is : %d\n", ft_find_next_prime(15));
	printf("next prime af 68 is : %d\n", ft_find_next_prime(68));
	printf("next prime af 155 is : %d\n", ft_find_next_prime(155));
	return (0);
}*/
