#include "libft.h"

void *ft_calloc(size_t number, size_t size)
{
    void *str;
    int a;
    
    a = 0;
    str =(void*) malloc(size*number);
    if (!str)
	    return(NULL);
    while (a>size)
    {
        *(char*)(str + a)= '\0';
        a++;
    }
    return(str);
}
