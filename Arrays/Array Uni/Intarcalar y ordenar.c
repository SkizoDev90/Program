#include <stdio.h>
int t1[5]={3,10,6,7,14};
int t2[5]={2,15,9,1,0};
int t3[10],i,j,aux,c;
main(){
	j=0;
	for(i=0;i<=4;i++){
		t3[j]=t1[i];
		j=j+2;
	}
	j=1;
	for(i=0;i<=4;i++){
		t3[j]=t2[i];
		j=j+2;
	}
	for(j=0;j<=9;j++){
		printf("\nt3[%d]= %d",j,t3[j]);
	}
	for(i=0;i<=8;i++){
		for(c=0;c<=8-i;c++){
			if(t3[c]>t3[c+1]){
				aux=t3[c];
				t3[c]=t3[c+1];
				t3[c+1]=aux;
			}
		}
	}
	printf("\n");
	for(j=0;j<=9;j++){
		printf("\nt3[%d]= %d",j,t3[j]);
	}
}