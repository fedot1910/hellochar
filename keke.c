#include <fcntl.h> 
#include <stdio.h>
void main()
{
int fd;
fd = open("/dev/hellochar", O_RDWR);
int j = write(fd, "Hello123451234512345123451243512435", 35);
close(fd);
printf("%i   %i", j, fd);
}
