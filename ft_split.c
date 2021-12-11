#include "libft.h"

static	char **alloc_split(char const *s, char c)
{
	unsigned int	a;
	char	**str;
	size_t	total;

	a = 0;
	total = 0;
	while(s[i])
	{
		if(s[i] == c)
			total++;
		i++;
	}
	split = (char**)malloc(sizeof(s) * (total + 2));
	if(!split)
		return (NULL);
	return (split);
}
void	*split_s(char **str,char *s,char c)
{


char **ft_split(char const *s, char c)
{
	char	**str;
	int	a;
	
	if(!(str = alloc_str(s, c)))
		return(NULL);
	if(!split_s(str, s, c)
			return(NULL);
	return (str);

