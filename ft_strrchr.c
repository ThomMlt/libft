
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s);
    len--;
    while (s[len] != c)
        len--;
    if (s[len] == c)
        return ((char *)&s[len]);
    return (NULL);
}

/*int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", strrchr(argv[1], argv[2][0]));
	printf("%s", ft_strrchr(argv[1], argv[2][0]));
}*/