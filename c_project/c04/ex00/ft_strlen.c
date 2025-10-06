/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:03:57 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/11 14:18:32 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main()
{
		char tab[] = "Le nombre douze";
		int a;
		a = ft_strlen(tab);
		printf("Lenght of the tab is %d\n", a);
		return (0);
}*/
