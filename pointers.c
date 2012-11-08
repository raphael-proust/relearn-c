#include <stdlib.h>
#include <stdio.h>

enum gender {female, male, either};

char*
str_gender(enum gender g){
	switch(g){
		case male: return("male");
		case female: return("female");
		case either: return("neutral");
	}
	exit(-1);
}

int
main(int argc, char *argv[]){
	int i;
	char *name[] = {
		"Alice",
		"Bernard",
		"Camille",
		"Debora"
	};
	int g[] = {female, male, either, female};

	int count = sizeof(g) / sizeof(enum gender);

	for(i=0; i<count; i++){
		printf("%s is a %s name\n", name[i], str_gender(g[i]));
	}
	puts("-=-=-=-=-=-=-");

	int *cur_g = g; //pointer to the start of g
	char **cur_name = name; //pointer to the start of name
	for(i=0; i<count; i++){
		printf("%s is a %s name\n", *(cur_name+i), str_gender(*(cur_g+i)));
	}
	puts("-=-=-=-=-=-=-");

	//pointers are also arrays
	for(i=0; i<count; i++){
		printf("%s is a %s name\n", cur_name[i], str_gender(cur_g[i]));
	}
	puts("-=-=-=-=-=-=-");

	//pointers can be modified in place
	for(cur_name=name, cur_g=g; cur_g - g < count; cur_name++, cur_g++){
		printf("%s is a %s name\n", *cur_name, str_gender(*cur_g));
		//*cur_name foolows the pointer cur_name
	}

	return(0);
}
