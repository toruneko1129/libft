#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*buf;
	char	*ft_buf;
	size_t	n;
	size_t	len;
	size_t	i;

	buf = (char *)calloc(strlen(argv[1]), sizeof(char));
	ft_buf = (char *)calloc(strlen(argv[1]), sizeof(char));
	strcpy(buf, argv[1]);
	strcpy(ft_buf, argv[1]);
	len = strlen(buf);
	printf("src:%s\n", buf);
	n = atoi(argv[2]);
	bzero(buf, n);
	ft_bzero(ft_buf, n);
	printf("lib:\n");
	i = len;
	while (i--)
	{
		printf("%x ", *buf);
		*buf++;
	}
	while (++i < len)
		*buf--;
	printf("\nft_:\n");
	i = len;
	while (i--)
	{
		printf("%x ", *ft_buf);
		*ft_buf++;
	}
	while (++i < len)
		*ft_buf--;
	free(buf);
	free(ft_buf);
	return (0);
}
