/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 09:40:47 by sleow             #+#    #+#             */
/*   Updated: 2023/06/25 20:42:30 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	if (argc == 3)
	{
	
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		rush(x, y);
	}
	else
	{
	}
}

