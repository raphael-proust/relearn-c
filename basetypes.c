#include <stdio.h>

int
main(int argc, char *argv[]){
	int i = 1, j = 2, k = 2;
	float f1 = 2.345f;
	double f2 = 55555.4444;
	char c = 'c';
	char *foobarbaz[] = {"Foo", "Bar", "Baz"};
	char empty[] = "";

	printf("Expect \"1 2 2\t2.345000 55555.444400\tc\tFoo Bar Baz\t\"\n");
	printf("       \"%d %d %d\t%f %f\t%c\t%s %s %s\t%s\"\n",
			i, j, k,
			f1, f2,
			c,
			foobarbaz[0], foobarbaz[1], foobarbaz[2],
			empty
		);

	return 0;
}

