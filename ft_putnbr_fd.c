void ft_putnbr_fd(int n, int fd)
{
    int a;
    
    if (n == -2147483648)
        ft_putstr_fd("-2147483648",fd);
    if (n < 0)
    {
        ft_putchar_fd("-", fd);
        n *= -1
    }
    if (9 =< n)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + 48, fd)
}
