#include <stdio.h>
int t[15];
int t1[15];
int i,n;
main(){
	printf("Visualiza k");
	for(i=0;i<=14;i++){
		do{
			printf("\nNumero: ");
			scanf("%d",&t[i]);
		}while(t[i]==0);
	}
	do{
		printf("\nDivisor: ");
		scanf("%d",&n);
	}while(n<0 || n>14);
	for(i=0;i<=14;i++){
		t1[i]=t[i]/n;
	}
	for(i=0;i<=14;i++){
		printf("\nt1[%d]= %d",i,t1[i]);
	}
}