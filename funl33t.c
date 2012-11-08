#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char tr_alpha(char c);
char tr_num(char c);
char tr_space(char c);

char
tr_alpha(char c){
	if(!isalpha(c)){
		fprintf(stderr, "ERROR: calling tr_alpha with non alphabetical character");
		exit(1);
	}
	switch(c){
		case 'a': return('@');
		case 'A': return('4');
		case 'B': return('8');
		case 'c':
		case 'C': return('(');
		case 'e':
		case 'E': return('3');
		case 'g': return('9');
		case 'i': return('!');
		case 'I': return('|');
		case 'l': return('1');
		case 'o':
		case 'O': return('0');
		case 'q': return('9');
		case 's':
		case 'S': return('5');
		case 't':
		case 'T': return('7');
		case 'z':
		case 'Z': return('2');
		default:
			  if(isupper(c))
				  return(tolower(c));
			  return(toupper(c));
	}
	exit(-1);
}

char
tr_num(char c){
	if(!isdigit(c)){
		fprintf(stderr, "ERROR: calling tr_num with non numerical character");
		exit(1);
	}
	switch(c){
		case '0': return('o');
		case '1': return('l');
		case '2': return('z');
		case '3': return('E');
		case '4': return('A');
		case '5': return('S');
		case '6': return('G');
		case '7': return('t');
		case '8': return('B');
		case '9': return('g');
	}
	exit(-1);
}

char
tr_space(char c){
	if(!isspace(c)){
		fprintf(stderr, "ERROR: calling tr_space with non space character");
		exit(1);
	}
	return(' ');
}


int
main(int argc, char *argv[]) {

	if(argc != 2) {
		fputs("ERROR: funl33t expects 1 argument\n", stderr);
		return 1;
	}

	int i=0;
	char c;

	for(i=0, c=argv[1][i]; c != '\0'; i++, c=argv[1][i]){
		if(isalpha(c)){
			putchar(tr_alpha(c));
		} else if(isdigit(c)){
			putchar(tr_num(c));
		} else if(isspace(c)){
			putchar(tr_space(c));
		} else {
			putchar(c);
		}
	}

	putchar('\n');

	return 0;
}
