NAME			= push_swap.a

GREEN			= \033[0;32m
RED				= \033[0;31m
RESET			= \033[0m

LIBFT 			= ./Libft

LIBFT_NAME		= libft.a

CC 				= cc

AR				= ar rc

STANDARD_FLAGS 	= -Wall -Werror -Wextra -fsanitize=address

REMOVE 			= rm -f

SRCS_DIR		= ./sources/

SRCS 			= $(addprefix $(SRCS_DIR),\
					sp.c \
					r.c \
					stack.c \
					sort.c \
					to_len.c \
					sort_little.c \
					sort_5.c \
					utilises.c \
					checks.c \
					push_swap.c)

OBJS		= ${SRCS:.c=.o}

all:		${NAME} run
			
makelibft:
			make -C ${LIBFT}
			cp ${LIBFT}/${LIBFT_NAME} .
			mv ${LIBFT_NAME} ${NAME}

${NAME}:	makelibft ${OBJS}
			${AR} ${NAME} ${OBJS}
			@echo "$(NAME): $(GREEN)$(NAME) was make.$(RESET)"
			@echo

clean:		
			${RM} ${OBJS}
			@cd $(LIBFT) && make clean

fclean:		clean
			${RM} push_swap
			${RM} push_swap.a
			${RM} a.out
			@cd $(LIBFT) && make fclean

re:				fclean all

run:			${NAME}
				${CC} ${NAME} ${LIBFT}/${LIBFT_NAME} ${STANDARD_FLAGS} -o push_swap
				${RM} ${NAME}
				@echo "$(NAME): $(GREEN)$(NAME) is ready to run.$(RESET)"
					@echo

.PHONY:			all clean fclean re  run