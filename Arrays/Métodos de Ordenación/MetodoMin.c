//Ordenacion por minimo
#include <stdio.h>
int t[10]={10,6,85,-46,-7,3,24,-15,3,6};
int i,min,n,aux,j;
main(){
	for(i=0;i<=9;i++){
		printf("\nt[%d] = %d",i,t[i]);
	}
	for(i=0;i<=8;i++){
		min=i;
		for(j=i+1;j<=9;j++){
			if(t[j]<t[min]){
				min=j;
			}
		}
		aux=t[min];
		t[min]=t[i];
		t[i]=aux;
	}
	printf("\n");
	for(i=0;i<=9;i++){
		printf("\nt[%d] = %d",i,t[i]);
	}
}