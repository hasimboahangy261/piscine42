/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:26:38 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/16 17:43:11 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	time;

	time = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		time = time * i;
		i++;
	}
	return (time);
}
/*
#include <stdio.h>
int	main()
{
	int nb = 255;
	int res = ft_iterative_factorial(nb);
	printf("facto de 5 est : %d\n", res); // need to be 120
	return (0);
}*/
