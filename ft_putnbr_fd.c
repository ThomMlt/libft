/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <tmillot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:17:28 by tmillot           #+#    #+#             */
/*   Updated: 2024/10/24 20:31:32 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fb(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		n = 147483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fb(n / 10, 1);
	n = (n % 10) + '0';
	write(fd, &n, 1);
}

/*int main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_fb(atoi(argv[1]), 1);
}*/
