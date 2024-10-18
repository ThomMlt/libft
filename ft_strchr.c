/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:52:36 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/18 15:15:07 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		*str++;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", strchr(argv[1], 'n'));
	printf("%s", ft_strchr(argv[1], 'n'));
}