#include <stdio.h>
#include <string.h>
void introducircad(char[]);
int jugar(char[]);
void introducirletra (char*);
void visualizar(int);
main(){
	printf("Visualizar ahorcado");
	char cad[9];
	introducircad(cad);
	int r= jugar(cad);
	visualizar(r);
}
void introducircad(char cad[]){
	printf("\nIntroduce cadena:");
	scanf("%s",cad);
	fflush(stdin);
}
int jugar(char cad[]){
	char c;
	int i=0;
	int cb=0, cm=0;
	int largo=strlen(cad);						
	while(cm<7 && cb<largo)	{
		introducirletra(&c);				
		int sw=0;
		i=0;
		while (cad[i]!='\0' && sw==0){				
			if(cad[i]==c){
				printf("%c",c);				
				cb++;
				sw=1;
			}
			i++;
		}
		if(sw==0){							
		cm++;
		}	
	}										
	if(cm==7){
		return 1;
	}
	if(cb==largo){
		return -1;
	}
}
void introducirletra(char *c ){
	printf("\nIntroduce letra: ");
	scanf("%c",c);
	fflush(stdin);	
	return c;
}
void visualizar(int r){
	if(r==1){
		printf("\nHas perdido");
	}else{
		printf("\nHas ganado");
	}
}
