/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:04:24 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/21 11:40:31 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	while (n - 1 > 0 && *(const char *)s1 == *(const char *)s2 && (s1 || s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (*(const char *)s1 - *(const char *)s2);
}

/*int main(int argc, char **argv)
{
    (void)argc;
    printf("%d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
    printf("%d", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
}*/