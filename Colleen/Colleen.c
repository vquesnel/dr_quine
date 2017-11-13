#include <stdio.h>
/*
	outside of my main
*/
int zdp(void) { return (1); }
int main(void) {
	/*
		inside of my main
	*/
	char *s="#include <stdio.h>%c/*%c%coutside of my main%c*/%cint zdp(void) { return (1); }%cint main(void) {%c%c/*%c%c%cinside of my main%c%c*/%c%cchar *s=%c%s%c;%c%czdp();%c%cprintf(s, 10, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 9); }";
	zdp();
	printf(s, 10, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 9); }