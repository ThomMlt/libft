/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:17:22 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/26 19:10:50 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

static char	*copy_str(char const *s, int start, int end)
{
	char	*str;

	str = ft_substr(s, start, (end - start));
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		start;
	int		end;
	int		i;
	int		y;

	i = 0;
	y = 0;
	tab = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i;
		if (end > start)
			tab[y++] = copy_str(s, start, end);
	}
	tab[y] = NULL;
	return (tab);
}

/*int main(int argc, char **argv)
{
	(void)argc;
	char **tab = ft_split(argv[1], argv[2][0]);
 	int i = 0;
	while (tab[i] != NULL)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}*/
