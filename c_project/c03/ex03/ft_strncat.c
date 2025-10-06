/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:02:18 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/10 17:30:20 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char dest[200] = "League of ";
	char src[] = "Legends de Mada";	
	printf("Dest av :%s\n", dest);
	ft_strncat(dest, src, 15);
	printf("Dest ap :%s\n", dest);
	return (0);
}*/
