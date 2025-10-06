/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:01:52 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/16 11:55:24 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!(size == 0))
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char dest[50];
	char src[] = "Hello Mada";
	int len = strlen(src);
	unsigned int	a;

	a = ft_strlcpy(dest, src, 10);
	printf(" Length of src: %d\n", len);
	printf("Lenght after ft : %d\n", a);
	printf("dest :%s\n", dest);
	
	printf("strlcpy %ld\n", strlcpy(dest, src, 10));
	
	
	return (0);
}
