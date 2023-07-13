/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:13:17 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/13 20:57:05 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(int ac, char **av)
{
	int	repeat;
	int	i;

	if (ac != 2)
		write (1, "\n", 1);
	else
	{
		i = 0;
		while (av[1][i])
		{
			repeat = 1;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				repeat += av[1][i] - 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				repeat += av[1][i] - 'A';
			while (repeat)
			{
				write (1, &av[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	return (0);
}
