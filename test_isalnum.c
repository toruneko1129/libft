#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int		c;
	int		lib;
	int		ft;

	c = atoi(argv[1]);
	lib = isalnum(c);
	ft = ft_isalnum(c);
	if (lib == 0 ^ ft == 0)
	{
		printf("KO\n");
		printf("Testcase: %d\n", c);
		printf("Expected: %d, found: %d\n", lib, ft);
	}
	return (0);
}
