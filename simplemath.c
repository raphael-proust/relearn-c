#include <stdio.h>

int
main(int argc, char *argv[]) {
	int i;
	double base = 100, rate = 1.01;

	for(i=0; i<5000; i++){
		base *= rate;
	}

	printf("Base has increased by %f\n", base - 100);

	return 0;
}
