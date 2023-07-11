/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:24:17 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/06 23:51:51 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
		write (1, "\n", 1);
	else
	{	
		while (*argv[1])
			write (1, argv[1]++, 1);
		write (1, "\n", 1);
	}
	return (0);
}