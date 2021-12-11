void ft_putstr_fd(char *s, int fd)
{
    int a;
    
    a = 0;
    if (!s)
        return;
    while(s[a])
    {
        write(fd, &s[a], 1);
        a++;
    }
}
