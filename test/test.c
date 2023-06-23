#include	<unistd.h>

void	ft_aprint(char c)
{	
	write(1, &c, 1);
}

int	main(void)
{
	ft_aprint('a');
	return (0);
}
