#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int		c;

	c = atoi(argv[1]);
	printf("src:%d\n", c);
	printf("lib:%d\n", isascii(c));
	printf("ft_%d\n", ft_isascii(c));
	return (0);
}
