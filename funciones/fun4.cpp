#include <stdio.h>
//prototipo de funcion
int introducir (void);
int factorial (int);
void visualizar(int);
int main(){
	printf("Factorial");
	int n=introducir();
	int f=factorial(n);
	visualizar (f);
}
int introducir(void){
	int x=0;
	do{
		printf("\nNumero: ");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
int factorial(int nn){
	int r=nn;
	int i=1;
	for(i=1;i<nn;i++){
		r=r*i;	
	}
    if(i == nn){
    	return r;
	}
}
void visualizar(int ff){
	printf("\nEl factorial es: %d",ff);
}