#include <stdio.h>

int fib(int i);
void put_int(int i);

int
fib(int i){
	int j, k;
	switch(i){
		case 0:
		case 1:
			return 1;
		default:
			j=fib(i-1);
			k=fib(i-2);
			return (j+k);
	}
}

void put_int(int i){
	printf("%d\n", i);
}

int
main(int argc, char *argv[]) {
	int result=0, i=40;

	result=fib(i);
	put_int(result);

	return 0;
}
