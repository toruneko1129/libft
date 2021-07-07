void	*memset(void *b, int c, size_t len)
{
	unsigned char		*ptr;
	const unsigned char	ch;

	ptr = (unsigned char *)b;
	ch = c;
	while (len--)
		*ptr++ = ch;
	return (b);
}
