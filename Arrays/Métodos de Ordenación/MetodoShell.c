//METODO SHELL
#include <stdio.h>
int t[10]={10,6,85,-46,-7,3,24,-15,3,6};
int i,sw,n,aux,s;

main(){
	for(i=0;i<=9;i++){
		printf("\nt[%d] = %d",i,t[i]);
	}
	s=9/2;
	for(s=9/2;s>=0;s--){
		sw=0;
		while(sw==0){
			sw=1;
			for(i=0;i<=(9-s);i++){
				if(t[i]>t[i+s]){
					aux=t[i+s];
					t[i+(s)]=t[i];
					t[i]=aux;
					sw=0;
				}
			}
		}
	}
	printf("\n");
	for(i=0;i<=9;i++){
		printf("\nt[%d] = %d",i,t[i]);
	}
}