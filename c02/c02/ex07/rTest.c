#include <stdio.h>


char	*ft_strupcase(char *str)
{
	int cnt = 0;
	while(*(str + cnt) != '\0')
	{
		if (*(str + cnt) >= 97 && *(str + cnt) <= 122)
		{
			*(str + cnt) -= 32;
		}
		cnt++;
	}
	return (str);
}

int	main()
{

	char str[] = "TTan55as";
	printf("%s", str);
	printf("%s",ft_strupcase(&str[0]));
	return(0);
}
