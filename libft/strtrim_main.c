#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *s = "lorem ipsum dolor sit amet";
	printf("String: %s\n", ft_strtrim(s, "te"));
	return 0;
}
