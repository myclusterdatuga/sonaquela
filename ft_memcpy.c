void *ft_memcpy(void *dest, const void * src, size_t n)
{
	size_t  a;

	a = 0;
	while (a < n)
	{
		*(unsigned char*)(dest + a) = *(unsigned char*)(src + a);
		a++;
	}
	return((char*)dest);
}
