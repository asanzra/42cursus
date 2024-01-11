#include<stddef.h>
#include"libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  size_t size1;
  size_t size2;
  char *res;

  size1 = ft_strlen(s1);
  size2 = ft_strlen(s2);
  res = (char *) malloc(size1 + size2 + 1);
  if (res == 0)
    return ((char *)(0));
  ft_strlcpy(res, s1, size1 + 1);
  ft_strlcpy(res + size1, size2 + 1);
  return (res);
}
