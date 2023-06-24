/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 09:43:49 by sleow             #+#    #+#             */
/*   Updated: 2023/06/24 16:09:47 by sleow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char);

// generate a formatted box of x columns and y rows.
void rush03(int x, int y)
{
	int	row_count;
	int	column_count;
	int	first_and_last;
	row_count = 1;
	column_count = 1;
	first_and_last = 1;

	// guard: if invalid parameters, return with an error
	if (y <= 0 || x <= 0)
	{
		ft_putchar('!');
		ft_putchar('\n');
	}
	else
	{
		// iterate through the rows
		while (row_count<=y)
        	{
			// check if we are currently at the first or last row
			first_and_last = (row_count == 1) || (row_count == y);
                        
			first_and_last ? ft_putchar('A') : ft_putchar('B');
			
			// fill the middle portions if columns > 2
                        while (column_count <= x-2)     
                        {
                                first_and_last ? ft_putchar('B') : ft_putchar(' ');
                                column_count++;
                        }
                        // reset helper counter
			column_count = 1;
			
			// add end char 'C' if columns more than 1
                        if (x > 1)
			{
				first_and_last ? ft_putchar('C') : ft_putchar('B');
			}
                        
			ft_putchar('\n');
			// go to next row
			row_count++;
        	}
	}
}

	
/*
	char	chara;
	char	charb;

	chara = 'c';
	charb = ' ';

	ft_putchar(chara);
	ft_putchar(charb);	
*/	

