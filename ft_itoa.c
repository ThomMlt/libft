/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:05:04 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/24 14:05:19 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;
	int		sign;

	sign = 1;
	nbr = n;
	len = count_nbr(nbr);
	str = malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		sign *= -1;
	}
	while (len-- > 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}

/*int main(void)
{
	printf("%s", ft_itoa(-2147483648));
}*/