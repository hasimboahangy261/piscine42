/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: todina-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 07:34:41 by todina-r          #+#    #+#             */
/*   Updated: 2025/09/14 20:47:31 by tsilaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_cond_num1(int **board, int *index);
void	ft_cond_num4(int **board, int ligne);

int	**ft_create_board(void)
{
	int	**board;
	int	index;
	int	sub_index;

	index = 0;
	board = (int **)malloc(sizeof(int *) * 4);
	while (index < 4)
	{
		sub_index = 0;
		board[index] = (int *)malloc(sizeof(int) * 4);
		while (sub_index < 4)
		{
			board[index][sub_index] = 0;
			sub_index++;
		}
		index++;
	}
	return (board);
}

void	ft_solve(int *view, int **board)
{
	int	i;
	int	ligne;

	i = 2;
	ligne = 0;
	while (i != 16)
	{
		if (view[i] == 1)
			ft_cond_num1(board, &i);
		else if (view[i] == 4)
			ft_cond_num4(board, ligne);
		ligne += 4;
		i++;
	}
}

void	ft_cond_num4(int **board, int ligne)
{
	int	i;

	i = 0;
	while (i != 4)
	{
		board[ligne][i] = i + 1;
		i++;
		ligne++;
	}
}

void	ft_cond_num1(int **board, int *index)
{
	if (*index == 0)
		board[*index][0] = 4;
	else if (*index == 1)
		board[*index][1] = 4;
	else if (*index == 2)
		board[*index][2] = 4;
	else if (*index == 3)
		board[*index][3] = 4;
}
