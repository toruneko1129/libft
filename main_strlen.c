#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	printf("src:%s\n", argv[1]);
	printf("lib:%lu\n", strlen(argv[1]));
	printf("ft_:%lu\n", ft_strlen(argv[1]));
	return (0);
}
