#include "libft.h"

char                *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int             len;
    int             i;
    char            *str;

    if (!s || !f)
        return 0;
    i= 0;
    len = ft_strlen(s);
    str = malloc(sizeof(char) * len + 1);
    if (!str)
        return(0);
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = 0;
    return (str);
}