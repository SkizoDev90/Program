//Definiremos la función de Ackermann como una función de los enteros no negativos N y M
//sobre los enteros mediante las siguientes reglas:

//				N+1 si M = 0
//A(M, N) = A(M -1,1) si M>0 y N = 0
//A(M -1, A(M, N -1)) si M > 0 y N > 0

//a) Defina un algoritmo y una función recursiva en C que permitan calcular A(M, N) para
//M ≥ 0 y N ≥ 0.
//b) Realice la prueba de escritorio para calcular A(3,2).
//c) Defina un algoritmo y una función en C no recursivos que permitan calcular A(M, N)
//para M ≥ 0 y N ≥ 0.
#include <stdio.h>
//prototipo de funciones
void introducir (int*);
int acker(int,int);
void visualizar (int,int);
int main(){
	int n,m;

	
	introducir (&m); 
	introducir (&n);
	
	visualizar (m,n);
}
void introducir (int *x){
	scanf("%d",x);
}
void visualizar (int m,int n){
	printf("\nEl resultado es %d",acker(m,n));
}

int acker(int m,int n){
	if(m==0){

        return n+1;

    }else if(m>0 && n==0){

        return acker(m-1,1);

    }else if(m>0 && n>0){

        return acker(m-1,acker(m,n-1));
    }
}
