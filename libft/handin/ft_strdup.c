#include<stddef.h>
#include"libft.h"

char *ft_strdup(const char *s)
{
  size_t buf_size;
  char *dup;

  buf_size = ft_strlen(s) + 1;
  dup = malloc(buf_size);
  if (dup != 0)
    ft_strlcpy(dup, s, buf_size);
  return (dup);
}
