#include "libft.h"

void            ft_putnbr_fd(int n, int fd)
{
    char        num;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n == 0)
    {
        write(fd, "0", 1);
        return ;
    }
    if (n < 0 && n != -2147483648)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    if (n >10 && n != -2147483648)
        ft_putnbr_fd(n / 10, fd);
    num = (n % 10) + '0';
    write(fd, &num, 1);
}