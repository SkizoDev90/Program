#include <stdio.h>
int t[10],i,aux,c;
main(){
	for(i=0;i<=9;i++){
		printf("valor: ");
		scanf("%d" ,&t[i]);
	}
	c=9;
	for(i=0;i<=9/2;i++){
		aux=t[i];
		t[i]=t[c];
		t[c]=aux;
		c=c-1;
	}
	for(i=0;i<=9;i++){
		printf("\nTabla[%d]=%d",i,t[i]);
	}
}