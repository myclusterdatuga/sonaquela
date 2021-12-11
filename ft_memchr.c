void *ft_memchr(const void *str, int c, size_t n)
{
    size_t	a;
    
	a = 0;
	while (a < n)
	{
		if (*(unsigned char*)(str + a) == (unsigned char)c)
			return ((void*)(str + a));
		a++;
	}
    return(NULL);
