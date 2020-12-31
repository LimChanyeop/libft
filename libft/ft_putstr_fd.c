#include "libft.h"

void                ft_putstr_fd(char *s, int fd)
{
    if (fd < 0)
        return ;
    write(fd, (const void *)s, (size_t)ft_strlen(s));
}