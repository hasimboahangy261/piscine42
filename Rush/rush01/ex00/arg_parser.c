/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 06:56:55 by todina-r          #+#    #+#             */
/*   Updated: 2025/09/13 08:43:13 by todina-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

void	ft_parse_arg(char *argv, int *view)
{
	int		arg_index;
	int		result_index;
	char	c;

	arg_index = 0;
	result_index = 0;
	while (argv[arg_index])
	{
		c = argv[arg_index];
		if (ft_is_numeric(c))
		{
			view[result_index] = c - '0';
			result_index++;
		}
		arg_index++;
	}
}
