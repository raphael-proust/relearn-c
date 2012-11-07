#include <stdio.h>

//This is purposely WRONG
//run `valgrind ./wrong.out` to observe errors

int
main(int argc, char *argv[]) {
	int age = 25;
	int limbs;

	printf("I am %d years old.\n");
	printf("I have %d limbs\n", limbs);

	return 0;
}
