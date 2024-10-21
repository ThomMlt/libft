/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:52:55 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/21 09:59:27 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*int main(int argc, char **argv)
{
    (void)argc;
    printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
    printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
}*/