#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *s = "hello there this is a test";
	char sep = ' ';
	printf("The string is: \"%s\", the separator is: \"%c\".\n", s, sep);
	char **split = ft_split(s, sep);
	for (int i = 0; split[i]; i++)
		printf("%i:\"%s\"\n", i, split[i]);
	return 0;
}
