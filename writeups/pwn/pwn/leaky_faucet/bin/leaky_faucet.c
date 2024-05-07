#include <stdio.h>
#include <stdlib.h>

void useful(void)
{
	__asm__ __volatile__ ("ret");
}

void call_a_plumber(void)
{
	char f[256] = {0};
	FILE* fp = fopen("./flag.txt", "r");
	if (!fp)
	{
		exit(-1);
	}

	puts("The answer's always a little love and a little more teflon tape.\n");

	fgets(f, 256, fp);
	puts(f);
	fclose(fp);
}

int main(void)
{
	char buf[32];

	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	setbuf(stderr, NULL);


	puts("ugh! my faucet's been leaking addresses all day, and I can't afford to call a plumber!");
	puts("maybe you can help?");
	puts("\n");

	puts("           drip...");
	puts("drip.");
	puts("                                        drip..");
	printf("             %lp\n", system);
	puts("                                 drip...");
	puts("      drip...");
	puts("                                                   ");
	puts("                 drip..");
	puts("\n");

	gets(buf);

	return 69 + 21;
}
