#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int		c;

	c = (int)argv[1][0];
	printf("src:%d\n", c);
	printf("lib:%d\n", isprint(c));
	printf("ft_%d\n", ft_isprint(c));
	return (0);
}
