/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:52:36 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/21 09:51:07 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

/*int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", strchr(argv[1], argv[2][0]));
	printf("%s", ft_strchr(argv[1], argv[2][0]));
}*/