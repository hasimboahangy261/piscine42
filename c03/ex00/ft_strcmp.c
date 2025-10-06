/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:21:51 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/15 07:30:17 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main ()
{
	char	str1[] = "piscineux";
	char	str2[] = "piscineux";
	char	str3[] = "wolrd";
	char	str4[] = "piscine";
	char	str5[] = "apple";
	char	str6[] = "banana";

	printf("comparaison One (p) :%d\n", ft_strcmp(str1, str2));
	printf("Comparaison Two (n) :%d\n", ft_strcmp(str1, str3));
	printf("comparaison Three (p) : %d\n", ft_strcmp(str1, str4));
	printf("Comparaison Four (n) : %d\n", ft_strcmp(str5, str6));

	return (0);
}*/
