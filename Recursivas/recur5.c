//Recorrer un array de forma recursiva
#include <stdio.h>
#define N 5
//prototipo de funciones
void introducir (int[]);
void visualizarA(int[],int);
int main(){
	int t[N];
	introducir (t);
	visualizarA(t,N);
}
void introducir (int t[]){
	int i;
	for(i=0;i<N;i++){
		printf("\nt[%d]: ",i);
		scanf("%d",&t[i]);
	}
}
void visualizarA(int t[],int n){
	if(n==0){
		return ;
	}else{
		printf("\nT[%d]: %d",n-1,t[n-1]);
		return visualizarA(t,n-1);
	}
}