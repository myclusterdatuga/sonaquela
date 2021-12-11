void *ft_memmove(void *dest, const void * src, size_t n)
{
    size_t  a;

    a = 0;
    if(dest > src)
    {
        a = n - 1;
        while(a >= 0)
        {
            *(char*)(dest + a) = *(char*)(src + a);
			a--;
        }
    
    }
    else
    {
        while (a < n)
        {
                *(unsigned char*)(dest + a) = *(unsigned char*)(src + a);
                a++;
        }
    }
    return((char*)dest);
}
