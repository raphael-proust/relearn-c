#include <stdio.h>

int
main(int argc, char *argv[]) {
	int i, tmp;
	int size = 1;
	int numarg = argc - 1;
	char *name;


	switch (numarg) {
		case 0: name = "nill-size"; break;
		case 1: name = "length"; break;
		case 2: name = "area"; break;
		case 3: name = "volume"; break;
		case 4: name = "hyper-volume"; break;
		default: name = "size";
	}

	for(i = 1; i <= numarg; i++) {
		sscanf(argv[i], "%d", &tmp);
		size *= tmp;
	}

	printf("The %s is %d\n", name, size);

	return 0;
}
