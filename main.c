#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	printf("their f: %s", strnstr(haystack, needle, 0)); 
	printf("\n");
	printf("my f   : %s", ft_strnstr(haystack, needle, 0));
}
