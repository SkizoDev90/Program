#include <stdio.h>
int t[10];
int i;
main(){
	for(i=0;i<=9;i++){
		do{
			printf("t[%d]",i);
			scanf("%d" ,&t[i]);
		}while(t[i]==0);	
	}
	for(i=0;i<=9;i++){
		if(t[i]>0){
			printf("t[%d]= %d",i,t[i]);
		}
	}
}