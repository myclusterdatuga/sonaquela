int cmp_values(char val1,char val2)
{
    if((unsigned char)val1 != (unsigned char)val2)
        return((unsigned char)val1 - ( unsigned char)val2);
    return(0);
}
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while(str1[a] && str2[a] && a <= n)
    {
        b = b + cmp_values(str1[a], str2[a]);
        a++;
    }
    return(b);
}
