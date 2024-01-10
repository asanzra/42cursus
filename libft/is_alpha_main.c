#include "ft_isalpha.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *chars = "a\nA?;!$\v.7UPlñ";

	for (int i=0; i < strlen(chars); i++)
	{
		char c = chars[i];
		printf("Is \"%c\" alpha: %d \n",c,ft_isalpha(c));
	}
		return 0;
}
