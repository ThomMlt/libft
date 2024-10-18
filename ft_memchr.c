#include "libft.h"

void    *ft_memchr(const char *s, int c, size_t n)
{
    unsigned char   *src;
    size_t i;

    src = (unsigned char *)s;
    i = 0;
    while (src[i] != '\0' && src[i] != c)
        i++;
    if (src[i] == c)
        return (&src[i]);
    return (NULL);
}

int main(int argc, char **argv)
{
    printf("%d\n", memchr(argv[1], argv[1][0], atoi(argv[3])));
    printf("%d\n", ft_memchr(argv[1], argv[1][0], atoi(argv[3])));
}