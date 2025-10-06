/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:40:39 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/20 17:36:21 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "funct.h"

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int a = ft_atoi(argv[1]);
	int	b = ft_atoi(argv[2]);
	if (argc < 1 && argc >= 3)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (1);
	}
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	return (0);
}
