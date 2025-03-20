#include <stdio.h>
#include <string.h>
//funciones
char cadena2[20];
char cadena1[20];
char lista[20];
int j,i,k;
main(){
	printf("cadena1: ");
	scanf("%[^\n]" ,cadena1);
	printf("que quieres eliminar: ");
	scanf("%s" ,lista);
	
	i=0;
	k=0;
	while(cadena1[i]!='\0'){
		j=0;
		while(cadena1[i]!=lista[j] && lista[j]!='\0'){
			j++;
		}
		if(lista[j]=='\0'){
			cadena2[k]=cadena1[i];
			k++;
		}
		i++;
	}
	cadena2[k]='\0';
	printf("\nAsi quedaria: %s",cadena2);
}