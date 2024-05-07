
#include <stdio.h>
#include <stdlib.h>

void monke(void)
{
	char flag[256] = {0};
	FILE *fp = fopen("./flag.txt", "r");
	if (!fp)
	{
		exit(-1);
	}
	fgets(flag, 256, fp);
	puts(flag);
	fclose(fp);	
}

int main(void)
{
	char buf[100];

	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	setbuf(stderr, NULL);

	puts("in today's society, is there not joy to be found in the simpler things?");
	gets(&buf);

	return 9 + 10;
}
