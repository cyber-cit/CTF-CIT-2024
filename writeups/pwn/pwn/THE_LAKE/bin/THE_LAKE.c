#include <stdio.h>
#include <stdlib.h>

void the_lake(void)
{
	char f[256] = {0};
	FILE* fp = fopen("./flag.txt", "r");
	if (!fp)
	{
		exit(-1);
	}

	puts("it happened 10 years ago. it's time to move on.");

	fgets(f, 256, fp);
	puts(f);
	puts("\n");
	fclose(fp);
}

int main(void)
{
	char buf[64];

	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	setbuf(stderr, NULL);


	puts("\n\n");
	puts("come back to the \e[31mlake\e[0m.\n");
	puts("I see an object in the \e[31mlake\e[0m. I am drawn towards it.");
	puts("input how many steps I will take.\n");
	gets(buf);

	// fstr leak 0
	printf("I take ");
	printf(buf);
	printf(" steps toward the \e[31mlake\e[0m.\n");
	//

	puts("god, how many years has it been since it happened?");
	puts("feels like forever. I've changed. people change.\n");
	gets(buf);

	// fstr leak 1
	printf("its been ");
	printf(buf);
	printf(" years? time flies. \ni feel like a different person trapped in my own skin.\n\n"); 
	//

	puts("there's something in the \e[31mlake\e[0m. what is in the \e[31mlake\e[0m.\n");
	gets(buf);

	return 42 + 21 + 69;
}
