#include "libft.h"´

char *ft_strdup(const char *string)
{
    int a;
    char *str;
    
    a = 0;
    while(string[a] != 0)
        a++;
    str = (char*) malloc(a * 8);
    if(!str)
	    return(NULL);
    a = 0;
    while(string[a])
    {
        str[a] = string[a];
        a++;
    }
    str[a] = 0;
    return(str);
}
