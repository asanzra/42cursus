#include<stddef.h>
#include<stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
  void *ptr;
  char *ptr_wrt;
  size_t i;

  ptr = malloc(nmemb * size);
  if (ptr != 0)
  {
    ptr_wrt = (char *) ptr;
    i = 0;
    for (i < nmemb * size)
      ptr_wrt[i++] = 0;
  }
  return (ptr);
}
