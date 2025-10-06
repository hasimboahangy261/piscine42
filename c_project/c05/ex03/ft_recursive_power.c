/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 06:52:16 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/17 07:02:49 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, (power -1)));
}

#include <stdio.h>
int	main()
{
	int nb = 5;
	int power = 2;
	printf("%d\n", ft_recursive_power(nb, power));
	printf("5 x 0 : %d\n", ft_recursive_power(5, 0));
	printf("-1 x -2 : %d\n", ft_recursive_power(-1, -2));
	return (0);
}
