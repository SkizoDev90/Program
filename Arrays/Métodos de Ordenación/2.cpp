#include <stdio.h>
#define N 10
#define M 15
#define K 25

//VARIABLES
int i, j, k;
int t1[N]={1,1,1,3,5,7,9,11,13,15}, t2[M]={2,4,6,6,8,10,12,14,16,18,20,22,24,26,28}, t3[K];

int main(){
	printf("ORDENACION POR MEZCLA");
	for(i=0,j=0,k=0; i<N  && j<M;){
		if(t1[i]<t2[j]){
			t3[k]=t1[i];
			i++;
		}
		else
		{
			t3[k]=t2[j];
			j++;
		}
		k++;
	}
	
	while(i<N){
		t3[k]=t1[i];
		k++;
		i++;
	}
	while (j<M){
		t3[k]=t2[j];
		k++;
		j++;
	}

	

	printf("\n\n");
	for(i=0;i<K;i++){
		printf("%d  ", t3[i]);
	}
	return 0;
}