#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>


static int	ft_words_count(char const *str, char sep)
{
	size_t	i;
	int		word;

	i = 0;
	word = 0;
	while (str[i])
	{		
		while (str[i] == sep && str[i])
			i++;
		word++;
		while (str[i] != sep && str[i])
			i++;
	}
	if (str[i - 1] == sep)
		word--;
	return (word);
}

int main()
{
	char str[] = "     ceci est un tes    t     ";
	char c = ' ';
	char **tab = ft_split(str, c);
	for(int i=0;i < ft_words_count(str, c);i++)
		printf("%s\n",tab[i]);
	
}
