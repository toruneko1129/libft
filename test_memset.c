#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	check_issame(char *b, char *ft_b, int bsize)
{
	while (bsize--)
	{
		if (*b != *ft_b)
			return (1);
		++b;
		++ft_b;
	}
	return (0);
}

void	print_testcase(char **argv, int bsize, int c, size_t len)
{
	printf("Testcase:\n");
	printf("b:");
	for (int i = 1; i <= bsize; ++i)
		printf(" %x", (char)atoi(argv[i]));
	printf("\nc: %d\n", c);
	printf("len: %lu\n", len);
}

void	print_result(char *b, char *ft_b, int bsize)
{
	printf("Expected:");
	for (int i = 0; i < bsize; ++i, ++b)
		printf(" %x", *b);
	printf("\nfound:");
	for (int i = 0; i < bsize; ++i, ++ft_b)
		printf(" %x", *ft_b);
}

int	main(int argc, char **argv)
{
	char	*b;
	char	*ft_b;
	int		bsize;
	int		c;
	size_t	len;
	int		i;
	char	*ptr;

	bsize = argc - 2;
	b = (char *)malloc(bsize * sizeof(char));
	ft_b = (char *)malloc(bsize * sizeof(char));
	for (i = 1, ptr = b; i <= bsize; ++i, ++ptr)
		*ptr = (char)atoi(argv[i]);
	for (i = 1, ptr = ft_b; i <= bsize; ++i, ++ptr)
		*ptr = (char)atoi(argv[i]);
	c = atoi(argv[argc - 1]);
	len = atoi(argv[argc]);
	if (memset(b, c, len) != ft_memset(ft_b, c, len) || check_issame(b, ft_b, bsize))
	{
		printf("KO\n");
		print_testcase(argv, bsize, c, len);
		print_result(b, ft_b, bsize);
	}
	free(b);
	free(ft_b);
	return (0);
}
