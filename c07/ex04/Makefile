# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hramaher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/23 18:44:33 by hramaher          #+#    #+#              #
#    Updated: 2025/09/23 18:55:03 by hramaher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

MY_SOURCES = ft_convert_base.c ft_convert_base2.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall - Wextra -Werror

$(NAME) : $(MY_OBJECTS)
	cc -o $(NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)
