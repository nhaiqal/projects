/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:32:25 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/09 15:17:45 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + (nb % 10));
}

/*int	main(void)
{
	int	nbr;

	nbr = 14748;
	ft_putnbr(nbr);
	return (0);
}*/
