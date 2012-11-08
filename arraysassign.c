#include <stdio.h>

int
main(int argc, char *argv[]) {
	char name[4] = {'a'};

	printf("name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	name[0] = 'x';
	name[1] = 'y';
	name[2] = 'y';
	name[3] = 'x';
	printf("name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	name[0] = 'a';
	name[1] = 'b';
	name[3] = '\0';
	printf("name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s %lu\n", name, sizeof(name));

	return 0;
}
