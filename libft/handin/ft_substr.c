#include<stdlib.h>
#include"libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
  char *res;

  res = (char *) malloc(len + 1);
  if (res == 0)
    return res;
  return (ft_strlcpy(res, s+start, len + 1));
}
