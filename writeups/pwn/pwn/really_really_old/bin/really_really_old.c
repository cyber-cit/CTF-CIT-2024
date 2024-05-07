#include <stdio.h>
#include <stdlib.h>

void krabby_patty_formula(void)
{
	// secret sauce
	__asm__ __volatile__("jmp %rsp");
}

int main(void)
{
	char buf[48];

	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	setbuf(stderr, NULL);

	puts("\n");
	puts("-+= WELCOME TO CITCTF SECRET SAUCE FLAVORTEXT GENERATOR =+-\n");
	puts("");
	puts("                     ERROR! GENERATION FAILED!");
	puts("\n");
	puts("               SWITCHING TO FALLBACK USER INPUT MODE!\n");
	puts("                  -+= INPUT QUALITY FLAVORTEXT: =+-");
	gets(&buf);
	puts("\n");

	printf("\"%s\" IS OF ACCEPTABLE QUALITY.\n\n", buf);

	return 9 + 10;
}
