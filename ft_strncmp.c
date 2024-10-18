#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && (i < n - 1) && (s1[i] || s2[i]))
        i++;
    return (s1[i] - s2[i]);
}

/*int main(int argc, char **argv)
{
    printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
    printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
}*/