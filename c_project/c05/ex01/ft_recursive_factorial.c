/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:44:06 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/16 18:02:28 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb <= 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main()
{
	int	a = ft_recursive_factorial(5);
	printf("Facto de 5 :%d\n", a);
	int b = ft_recursive_factorial(1);
	printf("Avec 1 :%d\n", b);
	int c = ft_recursive_factorial(0);
	printf("Avec 0 :%d\n", c);
	int d = ft_recursive_factorial(-1);
	printf("Negatif : %d\n", d);
	return (0);
}*/
