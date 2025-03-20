#include <stdio.h>
#include <conio.h>

char frase[30]; 
int i;
main(){
	i=0;
	do{
		frase[i]=getche();
		i++;
	}while((frase[i-4]!='S'&& frase[i-3]!='T'&&frase[i-2]!='O'&& frase[i-4]!='P')&& i<30);
	frase[i]='\0';
} 