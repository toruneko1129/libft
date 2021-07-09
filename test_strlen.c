#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*s;
	size_t	lib;
	size_t	ft;

	s = argv[1];
	lib = strlen(s);
	ft = ft_strlen(s);
	if (lib != ft)
	{
		printf("KO\n");
		printf("Testcase: %s\n", s);
		printf("Expected: %lu, found: %lu\n", lib, ft);
	}
	return (0);
}
