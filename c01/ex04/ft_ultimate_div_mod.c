/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 09:47:39 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/08 14:02:17 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}
/*int main(){
	int a = 10;
	int b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("valeur division: %d, valeur modulo: %d,", a, b);
	return 0;
}*/
