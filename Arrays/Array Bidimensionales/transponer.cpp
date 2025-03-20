#include <stdio.h>
int t[4][4]={
		{1,1,1,1},
		{2,2,2,2},
		{3,3,3,3},
		{4,4,4,4},
};
int i,j,aux;
main(){
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			aux=t[i][j];
			t[i][j]=t[j][i];
			t[j][i]=aux;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\t %d",t[i][j]);
		}
		printf("\n");
	}
}