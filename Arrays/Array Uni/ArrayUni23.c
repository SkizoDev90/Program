#include <stdio.h>
int t[10];
int j,i,c,p,aux;
main(){
	printf("intercambia numeros");
	for(i=0;i<=9;i++){
		printf("\nNumero t[%d]:",i);
		scanf("%d" ,&t[i]);
	}
	j=1; 	
	for(c=0;c<=9;c++){
		p=0;
		for(i=0;i<=9;i++){
			if(t[0]==t[i]){
				p=p+1;	
			}
		}
		printf("\nEl numero de la posicion t[%d] se repite %d veces",c,p);
		aux=t[0];
		t[0]=t[j];
		t[j]=aux;
		j++;
	}	
}