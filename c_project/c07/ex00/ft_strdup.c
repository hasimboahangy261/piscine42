/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 14:31:00 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/19 15:04:39 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = ft_strlen(src);
	if (src == NULL)
		return (NULL);
	cpy = (char *)malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char source[] = "copy this thing";
	char *cpy = ft_strdup(source);
	char *copy = strdup(source);
	printf("original :%s\n", copy);
	printf("Mine : %s\n", cpy);
	free(cpy);
	free(copy);
	return (0);
}*/
