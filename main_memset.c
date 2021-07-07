#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char	*buf = NULL;
	char	*ft_buf = NULL;
	int		c;
	size_t	len;

	buf = (char *)calloc(strlen(argv[1]), sizeof(char));
	ft_buf = (char *)calloc(strlen(argv[1]), sizeof(char));
	strcpy(buf, argv[1]);
	strcpy(ft_buf, argv[1]);
	printf("src:%s\n", buf);
	c = atoi(argv[2]);
	len = atoi(argv[3]);
	memset(buf, c, len);
	ft_memset(ft_buf, c, len);
	printf("buf   :%s\n", buf);
	printf("ft_buf:%s\n", ft_buf);
	return (0);
}
