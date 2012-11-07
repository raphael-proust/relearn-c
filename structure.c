#include <stdio.h>

int
main(int argc, char *argv[]) {
	int rounds = 100;
	int i;

	for(i = 0; i<rounds; i++){
		printf("Done %d rounds, only %d to go!\n", i, rounds-i);
		if(i>15) printf("This is boring!\n");
		if(i>20) {
			printf("This is really boring!\n");
			break;
		}
	}

	return 0;
}

