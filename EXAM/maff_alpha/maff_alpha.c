/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:17:10 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/06 23:00:18 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	lowercase;
	char	uppercase;
	int		i;

	lowercase = 'a';
	uppercase = 'A';
	i = 0;
	while (i < 26)
	{
		if (i % 2 != 0)
			write (1, &uppercase, 1);
		else
			write (1, &lowercase, 1);
		uppercase++;
		lowercase++;
		i++;
	}
	write (1, "\n", 1);
}
