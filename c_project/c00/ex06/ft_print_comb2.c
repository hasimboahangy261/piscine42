/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 00:07:24 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/06 20:54:11 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c);

void	ft_print_comb2(void);

int main(){ft_print_comb2();return 0;}

void	ft_print_comb2(void)
{
	int	a;
	int	b;	

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_char(a / 10 + '0' );
			ft_put_char(a % 10 + '0');
			write(1, " ", 1);
			ft_put_char(b / 10 + '0');
			ft_put_char(b % 10 + '0');
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	ft_put_char(char c)
{
	write(1, &c, 1);
}
