CC = gcc
CFLAGS = -Wall -Wextra -Werror -I -c
NAME = libft.a
FILES = main.c \
		ft_isprint.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_atoi.c \
		ft_memset.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_tolower.c \

OBJS = $(FILES:%.c=%.o)

all : $(NAME)

$(OBJS) : $(FILES)
	$(CC) $(CFLAGS) $(FILES)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)
	rm -f $(FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
