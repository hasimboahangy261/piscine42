/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 10:47:13 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/08 13:59:40 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int main(){
	int test1 = 25;
	int test2 = 55;
	printf("Avant swap: test1 = %d, test2 = %d\n", test1, test2);
	ft_swap(&test1, &test2);
	printf("Apres le swap: tet1 = %d, test2 = %d\n", test1, test2);
	return 0;
}*/
