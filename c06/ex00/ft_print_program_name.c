/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:14:14 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/11 21:20:41 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	while (*argv[0])
	{
		write (1, argv[0]++, 1);
	}
	write (1, "\n", 1);
	return (0);
}