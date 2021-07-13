#include "libft.h"

char	**ft_split(char const *s, char c)
{
	return (ft_make_split(s, c, 0));
}
