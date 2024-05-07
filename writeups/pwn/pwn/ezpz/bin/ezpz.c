#include <stdlib.h>
#include <string.h>


const char *pwn_pep_talk[] = {
	"\"the wise man pwns often, pwning even when pwn seems lost\"",
	"\"the foolish man pwns as a chore, not for the thrill of the shell\"",
	"\"shells are few. people are many.\"",
	"\"to pwn or not to pwn. that is the question.\"",
	"\"pwning is an art; to master it is to master life itself\"",
};

int main(void)
{
	srand(time(0));
	long pep_talk_idx = rand() % (sizeof(pwn_pep_talk) / sizeof(char *));
	char your_pep_talk[64];
	
	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	setbuf(stderr, NULL);

	puts(pwn_pep_talk[pep_talk_idx]);
	puts("\n");
	puts("i'm so tired of pwning and pwning all these insecure binaries.");
	puts("could you write me something to put the pep back in my step so");
	puts("I can pop some shells?");

	gets(your_pep_talk);

	puts("\nthank you. I will cherish this.\n");

	if(pep_talk_idx == -1) {
		system("/bin/sh");
	}
}
