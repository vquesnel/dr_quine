#include <stdio.h>
/* outside of my main */
int print(void) {
char *s="#include <stdio.h>%c/* outside of my main */%cint print(void) {%cchar *s=%c%s%c;%creturn(printf(s, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10)); }%c%cint main(void) {%c/* inside of my main */%cprint(); }";
return(printf(s, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10)); }

int main(void) {
/* inside of my main */
print(); }