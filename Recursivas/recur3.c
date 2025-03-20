//Factorial de un número.
#include <stdio.h>
//prototipo de funcion
void introducirN(int*);
int factorial(int);
void visualizar(int);

int main(){
	int n;
	introducirN(&n);
	int x=factorial(n);
	visualizar(x);
}

void introducirN(int *n){
	printf("\nIntroduce un número:");
	int x;
	do{
		x=scanf("%d",n);
	}while(x==0 && n<=0);
}
int factorial(int n){
	if(n==1){
		return n;
	}else{
		return n*factorial(n-1);
	}
}
void visualizar(int x){
	printf("El resultado es %d",x);
}
