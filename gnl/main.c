#include "get_next_line.c"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	int fd = open("./file.txt", O_RDWR);
	printf("File descriptor: %i\n", fd);
	char *line = get_next_line(fd);
	printf("String retrieved: %s\n",line);
	return 0;
}
