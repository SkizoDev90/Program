#include <stdio.h>
int t[10]={6,67,54,3,7,9,0,2,3,7},i,j,aux;
main(){
	for(i=0;i<=8;i++){
		for(j=0;j<=8-i;j++){
			if(t[j]>t[j+1]){
				aux=t[j];
				t[j]=t[j+1];
				t[j+1]=aux;
			}
		}
	}
	for(i=0;i<=9;i++){
		printf("\nt[%d]= %d",i,t[i]);
	}
}
