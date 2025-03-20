#include <stdio.h>
#include <string.h>
//variables
char frase[10];
char cadena[100];
int i,n;
void introducir();
void concatenar();
void visualizar();

int main(){
 introducir();
 concatenar();
 visualizar();
}
void introducir(){
	printf("Concatenar frases");
	printf("\nFrase: ");
	scanf("%[^\n]" ,frase);
	printf("\nNumero de veces: ");
	scanf("%d" ,&n);
}
void visualizar(){
	printf("\n %s ",cadena);
}
void concatenar(){
	for(i=0;i<n;i++){
		strcat(cadena,frase);
		strcat(cadena," ");
	}
}