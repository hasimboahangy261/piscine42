/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 07:28:01 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/22 08:04:34 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	len = max - min;
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	if (array == NULL)
		return (-1);
	*range = array;
	return (i);
}

#include <stdio.h>
int	main()
{
	int min = -10;
	int max = 8;
	int *array = NULL;
	int size = ft_ultimate_range(&array, min, max);
	printf("Array elements: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	free(array); // we have to free allocated memory
    printf("Range :%d\n", size);
	return (0);
}
