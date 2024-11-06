#include "libft.h"

int	main(void)
{
	int	a;
	
	a = 2147483647;
	ft_putnbr_fd(a, 1);
	write(1, "\n", 1);
}
