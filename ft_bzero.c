void bzero(void *str, size_t n)
{
	size_t	a;

	a = 0;	
	while(a < n)
	{
		*(unsigned char*)(str + a) = '\0';
		a++;
	}
	return (s);
}
