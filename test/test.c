#include	<unistd.h>

void	ft_aprint(char c)
{	
	write(1, &c, 1);
}
