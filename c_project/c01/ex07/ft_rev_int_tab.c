/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:07:20 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/08 16:15:41 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[(size - 1) - i]);
		i++;
	}
}
/*
int main()
{
	int chi[] = {7, 6, 5, 4, 3, 2, 1};
	printf("Avant swap :");
	for(int i=0; i < 7; i++){
		printf("%d - ", chi[i]);
	}
	printf("\n");
	ft_rev_int_tab(chi, 7);
	for(int i=0; i<7; i++){
		printf("%d -", chi[i]);
	}
}*/
