#include "libft.h"

int     main(void)
{
        char    big[20] = "hello everyone";
        char    little[3] = "eve";
        size_t  len = 4;

        printf("%s\n", ft_strnstr(big, little, len));
}
