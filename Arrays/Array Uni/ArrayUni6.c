#include <stdio.h>
int L[15];
int i,x,n;
main(){
	printf("K-enesimo");
	for(i=0;i<=14;i++){
		printf("\nL[%d]",i);
		scanf("%d",&L[i]);
	}
	printf("\nvalor a insertar: ");
	scanf("%d" ,&x);
	do{
		printf("\ndonde insertar: ");
		scanf("%d",&n);
	}while (n<0 || n>14);
	for(i=0;i<=14;i++){
		if(i==n){
			L[i]=x;
		}
	}
	for(i=0;i<=14;i++){
		printf("\nL[%d]= %d",i,L[i]);
	}
}