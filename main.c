#include "libft.h"

int	main(void)
{
	char	s[10] = "hello ";
	char	*v = NULL;
	char	*str;

	str = ft_strjoin(s, v);
	printf("%s\n", (char *)str);
}
