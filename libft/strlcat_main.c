#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *s = "copyme";
	char d[60] = "hey this is the initial";
	ft_strlcat(d,s,60);
	printf("%s\n",d);
	return 0;
}
