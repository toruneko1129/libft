#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				neg;
	unsigned long	off;
	int				lim;

	res = 0;
	neg = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		++str;
	}
	off = (unsigned long)(LONG_MAX + neg);
	lim = off % 10;
	off /= 10;
	while (ft_isdigit(*str) && (res < off || (res == off && *str - '0' <= lim)))
		res = res * 10 + *(str++) - '0';
	if (ft_isdigit(*str))
		return (neg - 1);
	if (neg)
		res = -res;
	return ((int)res);
}
