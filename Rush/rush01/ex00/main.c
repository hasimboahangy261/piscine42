/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:08:00 by tsilaran          #+#    #+#             */
/*   Updated: 2025/09/14 20:28:06 by tsilaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_parse_arg(char *argv, int *view);
int		**ft_create_board(void);
void	ft_print_board(int **board);
void	ft_cond_num4(int **board, int ligne);
void	ft_cond_num1(int **board, int *index);
void	ft_solve(int *view, int **board);

int	main(int argc, char *argv[])
{
	int	*view;
	int	**board;
	int	index;

	view = (int *)malloc(sizeof(int) * 16);
	if (argc > 1)
		ft_parse_arg(argv[1], view);
	board = ft_create_board();
	
	ft_solve(view, board);
	
	ft_print_board(board);
	index = 0;
	while (index < 4)
	{
		free(board[index]);
		index++;
	}
	free(board);
	free(view);
	return (0);
}

void	ft_print_board(int **board)
{
	int	i;
	int	j;

	i = 0;
	board = ft_create_board();
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", board[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
