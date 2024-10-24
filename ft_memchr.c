/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:47:10 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/21 10:48:45 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (src[i] != c && i < n)
		i++;
	if (src[i] == c)
		return ((void *)&(src[i]));
	return (NULL);
}

/*int main(int argc, char **argv)
{
	(void)argc;
    printf("%s\n", (char *)memchr(argv[1], argv[2][0], atoi(argv[3])));
    printf("%s\n", (char *)ft_memchr(argv[1], argv[2][0], atoi(argv[3])));
}*/