/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:45:46 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/05 22:50:55 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
		{
			c++;
		}
		if (to_find[c] == '\0')
			return (str + i);
		i++;
		c = 0;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "ammar bau busuk";
	char	to_find[] = "busuk";
	printf("%s", ft_strstr(str,to_find));
	return (0);
}
