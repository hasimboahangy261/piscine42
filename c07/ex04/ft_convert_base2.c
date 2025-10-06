/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:32:51 by hramaher          #+#    #+#             */
/*   Updated: 2025/09/23 18:43:52 by hramaher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_str_pos(char *c, char *str, char *base)
{
	int	i;
	long	result;
	int	sign;
	int	base_lenght;

	i = 0;
	result = 0;
	sign = 1;
	base_length = ft_strlen(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign*= -1;
		i++;
	}
	while (ft_str_pos(&str[i], base, base_lenght) != -1 && str[i] != '\0')
	{
		result = result * base_lenght + ft_str_pos(&str[i], base, base_length);
		i++;
	}
	return (result * sign);
}

void	long_to_base(long nbr, char *base, char *str, int index)
{
	int	base_lenght;

	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		str[index] = '-';
		index++;
		nbr = nbr * (-1);
	}
	if (nbr < base_lenght)
	{
		str[index] = base[nbr];
		str[index + 1] = '\0';
	}
	else
	{
		long_to_base(nbr / base_length, base, str, index);
		long_to_base(nbr % base_lenght, base, str, ft_strlen(str));
	}
}
