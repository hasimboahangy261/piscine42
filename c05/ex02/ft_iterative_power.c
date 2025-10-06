/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:03:18 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/17 06:51:33 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main() {
    int nb = 0;
    int power = 3;
    int result = ft_iterative_power(nb , power);
    printf( %d\n", ft_iterative_power(nb, power)); // 08

    int base_val = 5;
    int exp_val = 2;
    result = ft_iterative_power(base_val, exp_val);
   printf(" %d\n", result); //25
    return 0;
}*/
