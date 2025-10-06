/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:45:49 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/15 09:10:52 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// ft qui return length des strings a concatener.
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	sum;

	i = 0;
	sum = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
	{
		sum = dest_len + src_len;
	}
	else
	{
		sum = src_len + size;
	}
	while (src[i] && size > (dest_len + 1))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (sum);
}

int main()
{
	char	src[] = "poti blagueur";
	char	dest[20] = "Je suis un ";
	int	size;
	int	index;
	index = strlcat(dest, src, sizeof(dest));
	size = ft_strlcat(dest, src, 5);
	printf("Lenght :%d\n", size);
	printf("dest devient : %s\n", dest);
	printf("Avec strlcat: %d, %s\n", index, dest);
	return (0);
}
