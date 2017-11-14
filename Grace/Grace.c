#include <stdio.h>
#include <fcntl.h>
/* comment */
#define ZDP zdp
#define ZD zd
#define FT() int main() { int f = open("Grace_kid.c", O_RDWR | O_CREAT | O_TRUNC, S_IRWXU); char *s="#include <stdio.h>%c#include <fcntl.h>%c/* comment */%c#define ZDP zdp%c#define ZD zd%c#define FT() int main() { int f = open(%cGrace_kid.c%c, O_RDWR | O_CREAT | O_TRUNC, S_IRWXU); char *s=%c%s%c; dprintf(f, s, 10, 10, 10, 10, 10, 34, 34, 34, s, 34, 10); };%cFT();"; dprintf(f, s, 10, 10, 10, 10, 10, 34, 34, 34, s, 34, 10); };
FT();