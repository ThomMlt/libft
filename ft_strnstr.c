/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:50:12 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/21 14:16:45 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > 0)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j] && len-- > 0)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
		len--;
	}
	return (0);
}

/*#include <bsd/string.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
}*/