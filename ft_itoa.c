#include "libft.h"

int mychar(int a)
{
    int b = (a % 10 + 48);
    return(b);
}

void *strrev(char* str, int a)
{
    char temp;
    int b;
    b = 0;
    while(b < a / 2)
    {
        temp = str[b];
        str[b] = str[(a - b - 1)];
        str[(a - b - 1)] = temp;
        b++;
    }
    return(str);
}

int intlen(int a)
{
    int b;
    
    b = 0;
    if (a < 0)
        b++;
    while(a)
    {
        b++;
        a /= 10; 
    }
    return (a);
}
char *ft_itoa(int n)
{
    char *str;
    int a;
    int b;
    int status;
    a = 0;
    status = 1;
    b = intlen(n);
    if (n < 0)
    {
        status = -1;
        n *= - 1;
    }
    if(!(str = malloc(sizeof(char)*b)))
	return(NULL);
    while(n != 0)
    {
        str[a++] = mychar(n);
        n = n / 10;
    }
    if (status == -1)
        str[a++] = '-';
    return(strrev(str, a));
}
