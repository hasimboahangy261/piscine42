/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:36:41 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/15 07:39:04 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main ()
{
	char	str1[] = "Geeks";
	char	str2[] = "Geeks";
	char	str3[] = "Gee";
	char	str4[] = "Gasy";
	char	str5[] = "Shell";
	
	int one = ft_strncmp(str1, str2, 5);
	int two = ft_strncmp(str1, str3, 5);
	int three = ft_strncmp(str3, str4, 1);
	int four = ft_strncmp(str4, str5, 5);
	printf("Comparaison One (0) : %d\n", one);
	printf("Comparaison Two (p) : %d\n", two);
	printf("Comparaison Three (0)  : %d\n", three);
	printf("Comparaison Four (n) : %d\n", four);
	return (0);
}*/
