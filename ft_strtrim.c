#include "libft.h"

int check(char a, char const *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        if (str[i] == a)
            return(1);
        i++;
    }
    return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int a;
    int b;
    int c;
    
    b = 0;
    a = 0;
    c = 0;
    while (s1[a])
        a++;
    while(s1[b] && check(s1[b], set))
        b++;
    while(a > b && check(s1[a - 1], set))
        a--;
    str = (char*)malloc(sizeof(s1) * (a - b));
    if(!str)
	    return(NULL)
    while(b < a)
        str[c++] = s1[b++];
    str[c] = 0;
    return (str);
}
