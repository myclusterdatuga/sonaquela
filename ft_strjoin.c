#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int a;
    int b;
    
    a = 0;
    b = 0;
    while(s1[a])
        a++;
    while(s2[b])
        b++;
    a = a + b;
    b = 0;
    str = (char*) malloc(sizeof(char) * a);
    if(!str)
	    return(NULL);
    while(s1[b])
    {
        str[b] = s1[b];
        b++;
    }
    a = 0;
    while(s2[a])
    {
        str[b] = s2[a];
        a++;
        b++;
    }
    str[b] = 0;
    return(str);
}
