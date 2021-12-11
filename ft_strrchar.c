char *ft_strrchr(const char *str, int c)
{
	int a;

	a = 0;
	while(str[a])
		a++;
	while (a >= 0)
        {
		if(str[a] == (char)c)
			return((char*)(str + a));
		a --;
	}
	return(NULL);
}
