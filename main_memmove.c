#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*dst;
	char	*ft_dst;
	char	*src;
	size_t	n;

	dst = (char *)calloc(strlen(argv[1]), sizeof(char));
	ft_dst = (char *)calloc(strlen(argv[1]), sizeof(char));
	src = (char *)calloc(strlen(argv[2]), sizeof(char));
	strcpy(dst, argv[1]);
	strcpy(ft_dst, argv[1]);
	strcpy(src, argv[2]);
	printf("dst:%s\n", dst);
	printf("src:%s\n", src);
	n = atoi(argv[3]);
	printf("lib:\n%s\n", memmove(dst, src, n));
	printf("%s\n", dst);
	printf("ft_:\n%s\n", ft_memmove(ft_dst, src, n));
	printf("%s\n", ft_dst);
	free(dst);
	free(ft_dst);
	free(src);
	return (0);
}
