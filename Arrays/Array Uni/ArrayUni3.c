#include <stdio.h>
int t[10];
int i,cp,cn,c;
main(){
	printf(">O< =");
	for(i=0;i<=9;i++){
		printf("\nNumero: ");
		scanf("%d" ,&t[i]);
	}
	cp=0;
	cn=0;
	c=0;
	for(i=0;i<=9;i++){
		if(t[i]>0){
			cp++;
		}else if(t[i]<0){
			cn++;
		}else if(t[i]==0){
			c++;
		}
	}
	printf("\nPositivos: %d",cp);
	printf("\nNegativos: %d",cn);
	printf("\nCeros: %d",c);
}
