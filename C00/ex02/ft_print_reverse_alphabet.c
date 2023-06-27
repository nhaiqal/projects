/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:06:21 by mramlee           #+#    #+#             */
/*   Updated: 2023/06/25 04:04:54 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;
	int		i;

	a = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &a, 1);
		a--;
		i++;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
