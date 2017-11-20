#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define NAME "Sully_%i.c"
#define EXECUTE "clang -Wall -Wextra -Werror Sully_%i.c -o Sully_%i && ./Sully_%i"
#define QUINE "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c#include <fcntl.h>%c#define NAME %cSully_%ci.c%c%c#define EXECUTE %cclang -Wall -Wextra -Werror Sully_%ci.c -o Sully_%ci && ./Sully_%ci%c%c#define QUINE %c%s%c%cint main() {%cint i = %i;%cchar *file, *exec;%cint fd;%cif ( i <= 0 ) { exit(1); }%casprintf(&file, NAME, i);%cif ( access( file, F_OK ) != -1) { i--; asprintf(&file, NAME, i); }%casprintf(&exec, EXECUTE, i, i, i);%cif ( (fd = open(file, O_RDWR | O_CREAT | O_TRUNC, S_IRWXU)) >= 0 ) {%cdprintf(fd, QUINE, 10, 10, 10, 10, 34, 37, 34, 10, 34, 37, 37, 37, 34, 10, 34, QUINE, 34, 10,10, i, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10);%csystem(exec);%c}%cexit(0);%c}"
int main() {
int i = 5;
char *file, *exec;
int fd;
if ( i <= 0 ) { exit(1); }
asprintf(&file, NAME, i);
if ( access( file, F_OK ) != -1) { i--; asprintf(&file, NAME, i); }
asprintf(&exec, EXECUTE, i, i, i);
if ( (fd = open(file, O_RDWR | O_CREAT | O_TRUNC, S_IRWXU)) >= 0 ) {
dprintf(fd, QUINE, 10, 10, 10, 10, 34, 37, 34, 10, 34, 37, 37, 37, 34, 10, 34, QUINE, 34, 10,10, i, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10);
system(exec);
}
exit(0);
}