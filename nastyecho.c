#include <stdio.h>

int
main(int argc, char *argv[]) {
	int i;

	puts("standard echo:");
	for(i=1; i<argc; i++)
		printf("%s ", argv[i]);

	puts("\n\nself-obsessed echo:");
	for(i=0; i<argc; i++)
		printf("%s ", argv[i]);

	puts("\n\nreversed echo:");
	for(i=argc-1; i>0; i--)
		printf("%s ", argv[i]);

	puts("");

	return 0;
}
