#include "libft.h"

char * ft_strnstr(const char	*big, const char *little, size_t len)
{
    size_t  a;
    size_t  b;
    
    a = 0;
    b = 0;
    if(strlen(little) == 0 || little == NULL)
        return ((char*)big);
    while(a < len)
    {
        if (strncmp(big[a],little,strlen(little) == 0))
        {
            if (a + ft_strlen(little) > n)
				return (NULL);
			return ((char *)(s1 + a));
        }
        a++;
    }
}
