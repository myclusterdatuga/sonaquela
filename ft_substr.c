#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    int a;
    char *str;
    int b;
    
    a = 0;
    b = 0;
    str = (char*) malloc((len + 1) * sizeof(*s));
    if (!str)
	    return(NULL);
    while(s[b])
    {
         if (b >= start && a < len)
		{
			str[a] = s[b];
			a++;
		}
		b++;
    }
    return(str);
}
