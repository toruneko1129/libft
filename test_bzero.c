#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	print_string(char *b, int size)
{
	for (int i = 0; i < size; ++i)
		printf(" %x", *b++);
}

void	print_input(char *b, int size, size_t len)
{
	printf("KO\nTestcase:\nb:");
	print_string(b, size);
	printf("len: %lu\n", len);
}

void	print_output(char *b, char *ft_b, int size)
{
	printf("Expected:\n");
	printf("b:");
	print_string(b, size);
	printf("\nfound:\n");
	printf("b:");
	print_string(ft_b, size);
	printf("\n");
}

int	main(int argc, char **argv)
{
	char	*b;
	char	*ft_b;
	size_t	len;
	int		size;

	size = strlen(argv[1]);
	b = (char *)malloc((size + 1) * sizeof(char));
	ft_b = (char *)malloc((size + 1) * sizeof(char));
	strlcpy(b, argv[1], size + 1);
	strlcpy(ft_b, argv[1], size + 1);
	len = atoi(argv[2]);
	bzero(b, len);
	bzero(ft_b, len);
	if (strcmp(b, ft_b))
	{
		print_input(argv[1], size, len);
		print_output(b, ft_b, size);
	}
	free(b);
	free(ft_b);
	return (0);
}
