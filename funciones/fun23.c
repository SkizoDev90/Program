#include <stdio.h>
//prototipo de funcion
void introducir(char[]);

main(){
	printf("Hasta pulsar enter");
	char t[100];
	introducir(t);
}
void introducir(char t[]){
	printf("\nIntroducir cadena:");
	int i=0;
	do{
		t[i]=getche();
		i++;
	}while (t[i-1]!='\r');
	t[i]='\0';
}