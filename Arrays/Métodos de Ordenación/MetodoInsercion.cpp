//Ordenacion por inserccion
#include <stdio.h>
int t[10]={10,6,85,-46,-7,3,24,-15,3,6};
int i,aux,j;
main(){
	for(i=0;i<=9;i++){
		printf("\nt[%d] = %d",i,t[i]);
	}
	for(i=1;i<=9;i++){
		for(j=i;t[j]<t[j-1] && j>=1  ;j--){
			aux=t[j];
			t[j]=t[j-1];
			t[j-1]=aux;
		}
	}
	printf("\n");
	for(i=0;i<=9;i++){
		printf("\nt[%d] = %d",i,t[i]);
	}
}