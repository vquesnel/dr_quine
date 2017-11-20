#include <stdio.h>
#include <fcntl.h>
/*
  comment
*/
#define ZDP zdp
#define ZD zd
#define FT() int main() { int fd = open("Grace_kid.c", O_RDWR | O_CREAT | O_TRUNC, S_IRWXU); char *s="#include <stdio.h>%c#include <fcntl.h>%c/*%c  comment%c*/%c#define ZDP zdp%c#define ZD zd%c#define FT() int main() { int fd = open(%cGrace_kid.c%c, O_RDWR | O_CREAT | O_TRUNC, S_IRWXU); char *s=%c%s%c; dprintf(fd, s, 10, 10, 10, 10,10, 10, 10, 34, 34, 34, s, 34, 10); };%cFT();"; dprintf(fd, s, 10, 10, 10, 10,10, 10, 10, 34, 34, 34, s, 34, 10); };
FT();