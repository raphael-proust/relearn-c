#include <stdio.h>

int
main(int argc, char *argv[]) {
	int i;
	long l;
	char a;
	char foo[] = "foo";
	int baz[] = {8, 4, 2};

	printf("sizes: %lu %lu %lu %lu %lu %lu\n",
			sizeof(i),
			sizeof(l),
			sizeof(a),
			sizeof(foo),
			sizeof(baz),
			sizeof(&baz)
		);

	return 0;
}
