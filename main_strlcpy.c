#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*dst;
	char	*ft_dst;
	char	*src;

	dst = (char *)calloc(strlen(argv[1]) + 1, sizeof(char));
	ft_dst = (char *)calloc(strlen(argv[1]) + 1, sizeof(char));
	src = (char *)calloc(strlen(argv[2]) + 1, sizeof(char));
	strcpy(dst, argv[1]);
	strcpy(ft_dst, argv[1]);
	strcpy(src, argv[2]);
	printf("dst:%s\n", argv[1]);
	printf("src:%s\n", argv[2]);
	printf("\nlib:\n%lu\n%s\n", strlcpy(dst, src, strlen(dst) + 1), dst);
	printf("\nft_:\n%lu\n%s\n", strlcpy(ft_dst, src, strlen(ft_dst) + 1), ft_dst);
	free(dst);
	free(ft_dst);
	free(src);
	return (0);
}
