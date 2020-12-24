CC = gcc
CFLAGS = -Wall -Wextra -Werror -I -c
NAME = libft.a
FILES = main.c \
			ft_tolower.c \
			ft_memset \
			ft_zero \
			ft_memcpy \
			ft_memccpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_strlen \
			ft_strlcpy \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strnstr \
			ft_strncmp \
			ft_atoi \
			ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_toupper \
			ft_tolower \

OBJS = $(FILES:.c=.o)

all : $(NAME)

$(OBJS) : $(FILES)
	$(CC) $(CFLAGS) $(FILES)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)
	rm -f $(FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
