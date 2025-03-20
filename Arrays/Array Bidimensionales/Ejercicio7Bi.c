#include <stdio.h>
int t[4][4]={
		{1,1,1,1},
		{2,2,2,2},
		{3,3,3,3},
		{4,4,4,4},
};
int i,j,aux,n;
main(){
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("\t%d" ,t[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	n=0;
	for(i=1;i<=3;i++){
		aux=t[0][i];
		t[0][i]=t[i][0];
		t[i][0]=aux;
	}
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("\t%d" ,t[i][j]);
		}
		printf("\n");
	}
}