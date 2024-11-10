#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

//
/*
int	main(void)
{
	const char *str;

	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0)))
			ft_print_result("NULL");
		else
			ft_print_result(str);
}
*/

//LIBFT UNIT TEST MAIN

int	main(void)
{
	char b[0xF] = "nyan !";

	printf("their function:%zu", strlcat(((void*)0), b, 2));
	printf("\n");
}
