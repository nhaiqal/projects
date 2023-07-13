/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:41:12 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/13 19:59:12 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(void)
{
	char	lowercase;
	char	uppercase;
	int		i;

	i = 0;
	uppercase = 'Z';
	lowercase = 'z';
	while (i < 26)
	{
		if (i % 2 != 0)
			write (1, &uppercase, 1);
		else
			write (1, &lowercase, 1);
		i++;
		lowercase--;
		uppercase--;
	}
	return (0);
}
