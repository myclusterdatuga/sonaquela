void *ft_memset(void *str, int c, size_t n)
{
	int	a;

	a = 0;
	while(a <= n)
	{
		*(unsigned char*)(str + a) = (unsigned char)c
		a++;
	}
	return(str);
}
