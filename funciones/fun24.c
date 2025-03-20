#include <stdio.h>
//prototipos
void introducir(char[]);
int contar(char[]);
void visualizar(int);
main(){
	printf("Contar caracteres");
	char t[30];
	introducir(t);
	int c= contar(t);
	visualizar(c);
}
void introducir(char t[]){
	printf("\nIntroduce cadena:");
	scanf("%[^\n]",t);
}
int contar(char t[]){
	int i=0;
	int c=0;
	while (t[i]!='\0'){
		c++;
		i++;
	}
	return c;
}
void visualizar (int c){
	printf("\nEl numero de caracteres es %d",c);
}