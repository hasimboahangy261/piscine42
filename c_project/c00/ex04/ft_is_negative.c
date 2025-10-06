/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:17:13 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/06 03:59:40 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

//void main(){ft_is_negative(7);}

void	ft_is_negative(int n)
{
	char	val;

	val = 'P';
	if (n < 0)
	{
		val = 'N';
	}
	write(1, &val, 1);
}
