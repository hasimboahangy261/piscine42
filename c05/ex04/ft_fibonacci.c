/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 07:06:21 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/17 09:45:39 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main()
{
	printf("F5 :%d\n", ft_fibonacci(5)); //5
	printf("F7 :%d\n", ft_fibonacci(7)); //13
	printf("F1 :%d\n", ft_fibonacci(1)); //1
	printf("F0 :%d\n", ft_fibonacci(0)); //0
	printf("F-4 : %d\n", ft_fibonacci(-4));//-1
	return (0);
}*/
