/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 08:12:28 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/22 14:02:26 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copy(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (i < size - 1 && sep[j] != '\0')
		{
			str[k] = sep[j];
			j++;
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenght;
	int		i;
	char	*str;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght += ft_strlen(strs[i]);
		i++;
	}
	lenght = lenght + ft_strlen(sep) * (size - 1);
	str = (char *)malloc(lenght + 1);
	if (str == NULL)
		return (NULL);
	if (size == 0)
	{
		str[0] = '\0';
		return (str);
	}
	str = ft_copy(size, strs, sep, str);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *strs[] = {"Bonzour", "moi", "content", "toi", "korek"};
	char *sep = "-";
	char *s1;
 
	s1 = ft_strjoin(5, strs, sep);
	printf("%s\n" , s1);
	free(s1);
	return (0);
}*/
