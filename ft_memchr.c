/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:47:10 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/21 09:52:20 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const char *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (src[i] != '\0' && src[i] != c)
		i++;
	if (src[i] == c)
		return ((char *)&src[i]);
	return (NULL);
}

/*int main(int argc, char **argv)
{
    printf("%zu\n", memchr(argv[1], argv[1][0], atoi(argv[3])));
    printf("%zu\n", ft_memchr(argv[1], argv[1][0], atoi(argv[3])));
}*/