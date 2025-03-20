#include <stdio.h>
//prototipos de funcion
void introducir (char[]);
int contar (char[],char[]);
void visualizar(int );

int main(){
	printf("Contar secuencias");
	char cadena[20];
	char secu [5];
	introducir(cadena);
	introducir (secu);
	int c=contar(cadena,secu);
	visualizar(c);
}
void introducir(char t[]){
	printf("\nintroduce cadena: ");
	scanf("%[^\n]",t);
	fflush(stdin);
}
int contar(char ca[], char se[]){
	int i=0,j=0,c=0,sw;
	while(ca[i]!='\0'){
		j=0;
		sw=0;
		while(se[j]!='\0' && sw==0){
			if(ca[i]==se[j]){
				i++;
				j++;
			}else{
				i++;
				sw=1;	
			}
		}
		if(sw==0){
			c++;
		}
	}
	return c;
}
void visualizar(int c){
	printf("\nEl numero de secuencias es %d",c);
}
