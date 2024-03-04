# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 15:34:06 by ssteveli          #+#    #+#              #
#    Updated: 2024/01/30 14:41:28 by ssteveli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0m

CC 			= cc

SRCS		= ft_strlen.c \
				ft_strlenint.c \
				ft_convert_base.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_isnumber.c \
				ft_printf.c \
				ft_itoa.c\
				ft_bzero.c \
				is_chr.c \
				is_d.c \
				is_p.c \
				is_str.c \
				ft_strchr.c \
				is_u.c \
				is_x.c \
				ft_strcpy.c \
				is_xup.c \
				len_s.c \
				ft_toupper.c\
				ft_lstnew.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstsize.c \
				ft_lstadd_front.c
				
				

FLAGS 		= -Wall -Werror -Wextra

REMOVE 		= rm -f

OBJS 		= $(SRCS:.c=.o)

all:		${NAME}

${NAME}: 	${OBJS}
			@echo "\n$(NAME): $(GREEN)$(NAME) was created$(RESET)"
			ar -rcs ${NAME} ${OBJS}

.c.o:
			@echo "\n$(NAME): $(GREEN)object files were created$(RESET)"
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
			@echo "\n$(NAME): $(RED)object files were deleted$(RESET)"
			${REMOVE} ${OBJS}
			@echo

fclean:		clean
			@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
			${REMOVE} ${NAME}
			@echo

re:	fclean all

.PHONY:		all clean fclean re