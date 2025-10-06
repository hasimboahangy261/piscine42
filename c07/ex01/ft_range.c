/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:07:05 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/22 08:05:32 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int main()
{
	int *tab;
	int min = -10;
	int max = 9;
	int	i;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
