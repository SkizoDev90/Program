//Invertir un número de forma recursiva.
#include <stdio.h>
void introducirN(int*);
int calcular (int,int);

int main(){
	int n;
	introducirN(&n);
	calcular (n,0);
}
void introducirN(int *n){
	printf("\nIntroduce numero:");
	int x;
	do{
		x=scanf("%d",n);
	}while(x==0 && n<=0);
}
int calcular (int n,int i){
	printf("\n%d",n);
	if(i==0){
		i=-n;
	}		
	if(i==n){
		return n;
	}else{
		return calcular(n-1,i);
	}
}