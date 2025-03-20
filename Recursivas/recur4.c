//Sumar los números naturales hasta N de forma recursiva.
#include <stdio.h>
void introducirN(int*);
int calcular (int);
void visualizar(int);

int main(){
	int n;
	introducirN(&n);
	int x=calcular (n);
	visualizar(x);
}
void introducirN(int *n){
	printf("\nIntroduce numero:");
	int x;
	do{
		x=scanf("%d",n);
	}while(x==0 && n<=0);
}
int calcular (int n){
	int i=0;
	if(i==n){
		return n;
	}else{
		return n+calcular(n-1);
	}
}
void visualizar(int x){
	printf("El resultado de la suma es %d",x);
}