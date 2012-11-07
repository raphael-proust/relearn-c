#include <stdio.h>

int
main (int argc, char *argv[]) {
	int sisters = 1;
	int borthers = 1;
	char *plural = "s";
	char *singular = "";

	printf("I have %d sister%s, and %d brother%s",
			sisters, (sisters != 1 ? plural : singular),
			borthers, (borthers != 1 ? plural : singular)
		);

	return(0);
}
