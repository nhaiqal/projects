/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:43:53 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/13 17:51:35 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(int ac, char **av)
{
	if (ac < 2)
		write (1, "\n", 1);
	else
	{
		while (*av[1])
		{
			write (1, av[1], 1);
			av[1]++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
