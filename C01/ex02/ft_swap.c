/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:24:31 by mramlee           #+#    #+#             */
/*   Updated: 2023/06/27 23:50:38 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>
#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main()
{
	int x = 5;
	int y =10;

	printf("%d, %d \n", x,y);
	ft_swap(&x, &y);
	printf ("%d, %d", x,y);
	return (0);
}*/
