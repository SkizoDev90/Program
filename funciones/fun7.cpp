#include <stdio.h>
//prototipo de funcion
char introducir (void);
char cambiar (char);
void visualizar(char);

int main(){
	printf("Cambiar a Mayuscula");
	char i=introducir();
	char j=cambiar (i);
		 visualizar(j);
	
}
char introducir(void){
	char x=0;
	do{
		printf("\nLetra Minuscula: ");
		scanf("%c",&x);
		fflush(stdin);
	}while(x<'a'|| x>'z');
	return x;
}
char cambiar(char ii){
	ii= ii-32;
	return ii;
}
void visualizar(char jj){
	printf("\t%c",jj);
}