/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:54:08 by mramlee           #+#    #+#             */
/*   Updated: 2023/07/09 18:45:22 by mramlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

0123456789 - base 10 default strlen = 10 value >= base()
   1         0 - 10 - normal person every day say 10 means 10   3864
 10^1     10^0

(binary) base 2 = 01 
(hexadecimal) base 16 = 0123456789abcdef
base 2 10 = base 10 2
  1          0
 2^1        2^0

     base 10 (normal person)    base 2 (binary)
              1                        1
              2                       10          1     0    1    1
              3                       11         2^3   2^2  2^1  2^0
              7                       111         8     4    2    1


  1    1    1   1  1  1  1   
 64   32   16   8  4  2  1   - binary

111111 - normal person
             1           1          1       1        1     1
           100000       10000      1000     100      10     1   - normal person
1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 121076 242152 585
1 10 100 1000 10000 100000 1000000 10000000

base 3 012

       9  3  1
         3^1 3^0
!@#$%^&nbk 0 = !  1 = @ 2 = # 3 = $
3864 - 

write (1, &c, 1);
ft_strlen - finding out what base, > 1
base[i] < 33 base [i] != 127
base[i] == 45
sign = -sign
0123455789
base[i] != 43 and base[i] != 45
++++---++--++ while (base[i] == 43 || base[i] == 45)
                     if (base[i] == 45) sign = -sign
ft_strlen
ft_putchar
ft_negative
ft_putnbr_base (ft_putnbr) long if (-2147483648)
long nb = nbr
if (nb < 0)
ft_putchar('-')
nb = -nb
int 	ft_checkerror inside your base error return(0) 
ft_putnbr_base
.
.
.
.
if (ft_checkerror != 0)
continue with regular function

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

int	ft_checkerror(char *base)
{
	int	i;

	i = 0;
	while (base[i])
{
	if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45
		|| ft_strlen(base) < 2)
		return (just not 0 anything)
}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nbr_shorter_than_base(int nb, char *base)
{
	int	i;

	i = 0;
	while (nb[i])
	i++;
	if (i < ft_strlen(base))
	change the base and write it thanks
}

void	ft_putnbr_base(int nb, char *base)
{
	do c05
