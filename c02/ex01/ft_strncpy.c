/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:54:05 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/09 08:55:18 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char src[] = "Geeks of 42";
	char destination[50];
	int lenght = strlen(src);
	printf("Lenght of string src is: %d \n",lenght);
	ft_strncpy(destination, src, 20);
	printf("destination devient: %s", destination);
	return (0);
}*/
