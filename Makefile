NAME			= push_swap

GREEN			= \033[0;32m
RED				= \033[0;31m
RESET			= \033[0m

LIBFT 			= ./libraries/Libft

LIBFT_NAME		= libft.a

CC 				= cc

AR				= ar rc

STANDARD_FLAGS 	= -Wall -Werror -Wextra -fsanitize=address

REMOVE 			= rm -f

SRCS_DIR		= ./sources/

SRCS 			= $(addprefix $(SRCS_DIR),\
				push_swap.c \
				swap.c \
				push.c \
				rotate.c \
				rotate_2.c \
				manip.c)

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
			${RM} ${NAME}
			${RM} a.out
			@cd $(LIBFT) && make fclean

re:				fclean all

run:			${NAME}
				${CC} ${NAME} ${LIBFT}/${LIBFT_NAME} ${STANDARD_FLAGS} -o ${NAME}
				@echo "$(NAME): $(GREEN)$(NAME) is ready to run.$(RESET)"
					@echo

.PHONY:			all clean fclean re  run