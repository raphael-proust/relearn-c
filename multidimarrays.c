#include <stdio.h>

int
main(int argc, char *argv[]) {
	int i, j;
	int matrix[3][3] = {
		{1, 1, 1},
		{0, 1, 1},
		{0, 0, 1}
	};
	int vector[3] = {1, 2, 3};
	int result[3] = {0, 0, 0};

	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			result[i] += matrix[i][j] * vector[j];

	printf("%d\n%d\n%d\n", result[0], result[1], result[2]);

	return 0;
}
