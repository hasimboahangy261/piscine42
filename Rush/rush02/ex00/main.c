/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 00:50:27 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/21 14:43:00 by faniraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*dictionary;
	int		sz;
	int		i;

	if (argc <= 1 || argc > 2)
		write(1, "Error\n", 6);
	if (is_valid(argv[1]) == 1)
		write(1, "Error\n", 6);
	dictionary = (char *)malloc(2200);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);
	sz = read(fd, dictionary, 80000);
	close(fd);
	dictionary[sz] = '\0';
	i = 0;
	while (i < sz)
	{
		write(1, &dictionary[i], 1);
		i++;
	}
	free(dictionary);
	return (0);
}
