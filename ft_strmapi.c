#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int a;
    char *str;
    
    a = 0;
    while(s[a])
        a++;
    str = malloc(sizeof(char)*a);
    if(!str)
        return(NULL);
    a = 0;
    while(s[a])
    {
        str[a] = (*f)(a, s[a]);
        a++; 
    }
    str[a] = '\0';
    return(str);
}
