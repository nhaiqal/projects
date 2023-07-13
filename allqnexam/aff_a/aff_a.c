/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:40:08 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/13 16:17:50 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		write (1, "a", 1);
	else
	{
		while (*av[1])
		{
			if (*av[1] == 'a')
			{
				write (1, "a", 1);
				break ;
			}
			av[1]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
