#include <stdio.h>
#include <conio.h>
char cadena[30];
int i,cc,cm;
main(){
	i=0;
	cc=0;
	cm=0;
	do{
		fflush(stdin);
		cadena[i]=getche();
		if(cadena[i]>='a'&& cadena[i]<='z'){
			cm++;
		}
		cc++;
		i++;
	}while(cadena[i-1]!='.' && cc<10);
	printf("\nLa cantidad de minusculas: %d" ,cm);
}