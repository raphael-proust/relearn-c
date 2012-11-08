#include <stdio.h>

int
main(int argc, char *argv[]) {

	if(argc != 2) {
		fputs("ERROR: l33t expects 1 argument\n", stderr);
		return 1;
	}

	int i=0;
	char c;

	for(i=0, c=argv[1][i]; c != '\0'; i++, c=argv[1][i]){
		switch(c) {
			case 'a':
			case 'A':
				putchar('4');
				break;
			case 'b':
				putchar('6');
				break;
			case 'B':
				putchar('8');
				break;
			case 'c':
			case 'C':
				putchar('(');
				break;
			case 'D':
				fputs("|)", stdout);
				break;
			case 'e':
			case 'E':
				putchar('3');
				break;
			case 'f':
			case 'F':
				fputs("|=", stdout);
				break;
			case 'g':
				putchar('9');
				break;
			case 'G':
				putchar('6');
				break;
			case 'H':
				fputs("|-|", stdout);
				break;
			case 'i':
				putchar('!');
				break;
			case 'I':
				putchar('1');
				break;
			case 'k':
				fputs("|<", stdout);
				break;
			case 'l':
			case 'L':
				putchar('1');
				break;
			case 'm':
			case 'M':
				fputs("|V|", stdout);
				break;
			case 'N':
			case 'n':
				fputs("|\\|", stdout);
				break;
			case 'O':
			case 'o':
				putchar('0');
				break;
			case 'R':
				fputs("|2", stdout);
				break;
			case 't':
			case 'T':
				putchar('7');
				break;
			case 'w':
				fputs("vv", stdout);
				break;
			case 'W':
				fputs("VV", stdout);
				break;
			case 'x':
				fputs("><", stdout);
				break;
			case 'y':
			case 'Y':
				fputs("`/", stdout);
				break;
			case 'z':
			case 'Z':
				putchar('2');
				break;
			default:
				putchar(c);
		}
	}

	putchar('\n');

	return 0;
}
