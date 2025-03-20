#include <stdio.h>
int t[4][4]={
		{1,1,1,1},
		{2,2,2,2},
		{3,3,3,3},
		{4,4,4,4},
};
int i,j,aux;
main(){
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("\t%d" ,t[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=3;i++){
		for(j=i+1;j<=3;j++){
			aux=t[j][i];
			t[j][i]=t[i][j];
			t[i][j]=aux;
		}
	}
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("\t%d" ,t[i][j]);
		}
		printf("\n");
	}
}