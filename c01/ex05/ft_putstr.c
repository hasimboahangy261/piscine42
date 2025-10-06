/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:12:17 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/08 14:02:35 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	ft_strlen(char *c)
{
	int	length;

	length = 0;
	while (c[length] != '\0')
	{
		length++;
	}
	return (length);
}

void	ft_putstr(char *str)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = ft_strlen(str);
	while (i < nbr)
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main() {
//	char b[]="Geeks";
//	printf("la longueur du tableau est: %d", ft_strlen(b));
	char test[] = "Geeks";
	ft_putstr(test);
	return 0;
}*/
