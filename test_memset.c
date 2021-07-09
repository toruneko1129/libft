#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	print_string(char *b, int size)
{
	for (int i = 0; i < size; ++i)
		printf(" %x", *b++);
}

void	print_input(char *b, int size, int c, size_t len)
{
	printf("KO\nTestcase:\nb:");
	print_string(b, size);
	printf("\nc: %d\n", c);
	printf("len: %lu\n", len);
}

void	print_output(char *b, char *ft_b, char *s1, char *s2, int size)
{
	printf("Expected:\nOutput:");
	print_string(s1, size);
	printf("\nb:");
	print_string(b, size);
	printf("\nfound:\nOutput:");
	print_string(s2, size);
	printf("\nb:");
	print_string(ft_b, size);
	printf("\n");
}

int	main(int argc, char **argv)
{
	char	*b;
	char	*ft_b;
	int		c;
	size_t	len;
	int		size;
	char	*s1;
	char	*s2;

	size = strlen(argv[1]);
	b = (char *)malloc((size + 1) * sizeof(char));
	ft_b = (char *)malloc((size + 1) * sizeof(char));
	strlcpy(b, argv[1], size + 1);
	strlcpy(ft_b, argv[1], size + 1);
	c = atoi(argv[2]);
	len = atoi(argv[3]);
	s1 = memset(b, c, len);
	s2 = ft_memset(ft_b, c, len);
	if (strcmp(s1, s2) || strcmp(b, ft_b))
	{
		print_input(argv[1], size, c, len);
		print_output(b, ft_b, s1, s2, size);
	}
	free(b);
	free(ft_b);
	return (0);
}
