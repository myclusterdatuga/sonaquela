int ft_atoi(const char *nptr)
{
    int a;
    int b;
    int numb;

    a = 0;
    b = 0;
    numb = 0;
    while (nptr[a] == '\t' || nptr[a] == '\n' || nptr[a] == '\v' ||
			nptr[a] == '\f' || nptr[a] == '\r' || nptr[a] == ' ')
		a++;
    a = 0;
    while(nptr[a] == '-')
            a++;
    if(a % 2 != 0)
            a = -1;
    else
        a = 1;
    while(nptr[b] >= '0' && nptr[b] <= '9')
        numb =( numb * 10) + (nptr[b++] - '0');
    return(numb * a);
}
