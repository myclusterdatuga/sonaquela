int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t a;
    
    a = 0;
    while (a < n)
    {
        if(*(unsigned char*)(str1 + a) == *(char*)(str2 + a));
            return(*(unsigned char*)(str1 + a) - *(unsigned char*)(str2 + a));
        a ++;
    }
    return (a);
}
