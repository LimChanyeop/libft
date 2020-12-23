CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
FILES = ft_atoi.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_memcpy.c \
		ft_strlcat.c \
	ft_strlen.c \
		ft_tolower.c \

OBJS = $(FILES:%.c=%.o)

all :	$(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o  $(NAME) $(OBJS)

$(OBJS) : $(FILES)
	$(CC) $(CFLAGS) $(FILES)

clean :
	rm -f $(OBJS)
	rm -f $(FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all


