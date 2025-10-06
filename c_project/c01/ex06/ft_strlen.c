/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:33:23 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/08 13:56:05 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count ++;
	}
	return (count);
}
/*
int main (){
	char test[] = "Geeks";
	int b = ft_strlen(test);	
	printf("%d", b);
}*/
