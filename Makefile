CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./libft

NAME = ft_minishell1
OBJS = main.o get_next_line.o builtins.o program.o
LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $+ $(LDFLAGS) -o $@

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
