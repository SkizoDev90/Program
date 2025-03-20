#include <stdio.h>
#include <string.h>
//variables
char palabra[10];
char cadena[4][5]={
				{'h','o','l','a','\0'},
				{'q','u','e','\0',' '},
				{'e','s','t','a','\0'},
				{'h','o','l','a','\0'},
};
int i,sw;
main(){
	printf("Que palabra quieres buscar: ");
	scanf("%s",palabra);
	sw=0;
	for(i=0;i<4 && sw==0;i++){	
		if(strcmp(palabra,cadena[i])==0){
			printf("palabra encontrada");
			sw=1;
		}
	}
	if(sw==0){
		printf("palabra no encontrada");
	}
}