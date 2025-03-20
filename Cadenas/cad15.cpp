#include <stdio.h>
#include <conio.h>
char cadena[30];
int i;
main(){
	i=0;
	do{
		fflush(stdin);
		cadena[i]=getche();
		i++;
	}while(cadena[i-1]<'A'||cadena[i-1]>'Z');
}