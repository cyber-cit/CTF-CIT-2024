#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int arg1;
int arg2;
int log[2];

void nothing_here_go_away_kthx_bye(void)
{
	__asm__ __volatile__("pop %rdi; ret");
}

void right_foot_creep1(int arg)
{
	if (arg != arg1)
	{
		puts("wrong! womp womp.");
		exit(22);
	}

	log[0] = 1;
	puts("almost. there.");
}

void left2_foot_creep_FORBIDDEN(int arg)
{
	if (log[0] != 1 || arg != arg2)
	{
		puts("not quite! teehee\n");
		puts("connection terminated.");
		exit(420);
	}

	puts("magnificalicious. luh flaggington for you: \n");

	char f[256] = {0};
	FILE* fp = fopen("./flag.txt", "r");
	if (!fp)
	{
		exit(-1);
	}

	fgets(f, 256, fp);
	puts(f);
	fclose(fp);
}

int main(void)
{
	char buf[420];

	srand(time(NULL));
	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	setbuf(stderr, NULL);

	arg1 = rand() % 69;
	arg2 = rand() % 420;

	puts("omg hi! I've been practicing my texas two-step, but I can't quite figure it out.");
	puts("every time I almost nail it, I stumble and mess it all up. This will not do.");
	puts("\n");
	puts("I have a meeting with an important niche internet microcelebrity in ");
	printf("%d HOURS and %d MINUTES, \nand ", arg1, arg2);
	puts("I can't afford to make a single mistake!");
	puts("\n");
	puts("have any advice for a stepper such as myself to lock in and fix my 2 step game?");

	gets(buf);

	return 9 + 10;
}
