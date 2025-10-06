/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 07:20:42 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/08 14:01:54 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main() {
	int a = 12;
	int b = 6;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("Valeur division: %d, et valeur modulo: %d\n", div, mod);
	return (0);
} */
