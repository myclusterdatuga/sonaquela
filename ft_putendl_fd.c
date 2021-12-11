void ft_putendl_fd(char *s, int fd)
{
    int a;
    char b;
    
    a = 0;
    b = '\n';
    if (!s)
        return ;
    while(s[a])
    {
        write(fd, &s[a], 1);
        a++;
    }
    write(fd, &b, 1);
}
