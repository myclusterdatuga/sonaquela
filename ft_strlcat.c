size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  a;
    size_t  b;
    size_t  c;
    size_t  d;
    
    b = 0;
    c = 0;
    d = 0;
    while(src[c] != '\0')
        c++;
    while(dst[d] != '\0')
        d++;
    a = d;
    if (d < dstsize - 1 && dstsize > 0)
    {
        while(src[b] != '\0' &&  b + d < dstsize - 1)
        {
            dst[a] = src[b];
            b++;
            a++;
        }
        dst[a] = '\0';
    }
    if(d >= dstsize)
        d = dstsize;
    return(c + d);
}
