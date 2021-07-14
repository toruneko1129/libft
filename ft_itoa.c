#include "libft.h"

static void	ft_init(int n, int *len, int *sign, char *a)
{
	*len = 0;
	if (n == 0)
	{
		*len = 1;
		a[0] = '0';
	}
	*sign = 1;
	if (n < 0)
		*sign = -1;
}

static void	ft_reverse(char *b, char *a, int len)
{
	int		i;

	i = -1;
	while (++i < len)
	{
		b[i] = a[len - 1 - i];
	}
	b[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		sign;
	char	a[12];
	char	b[12];

	ft_init(n, &len, &sign, a);
	while (n)
	{
		a[len++] = '0' + n % 10 * sign;
		n /= 10;
	}
	if (sign == -1)
		a[len++] = '-';
	ft_reverse(b, a, len);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, b, len + 1);
	return (res);
}
