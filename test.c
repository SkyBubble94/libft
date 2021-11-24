#include "libft.h"
#include <string.h>
#include <stdio.h>

char	f(unsigned int i, char c)
{
	return(c + i);
}

int main()
{
	char test[] = "ceci est un test";
	char *mp;
	mp = ft_strmapi(test, f);
	printf("%s", mp);
}
