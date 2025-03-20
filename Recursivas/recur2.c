//El problema del Máximo Común Divisor (MCD), fue resuelto por Euclides y para hallar el
//MCD de dos números enteros calcular M y N para M ≥ 0 y N ≥ 0, se puede usar el siguiente
//método:

//M si N = 0

//MCD(M,N)=

//MCD(N, M % N) si N > 0

//a) Defina un algoritmo y una función recursiva en C que permitan calcular MCD(M,N)
//para M ≥ 0 y N ≥ 0.
//b) Realice la prueba de escritorio para calcular MCD(140,28).
//c) Defina un algoritmo y una función en C no recursivos que permitan calcular
//MCD(M,N) para M ≥ 0 y N ≥ 0.
#include <stdio.h>
//prototipos de funcion
void introducir(int*);
float euclidesSin(int,int);
float euclidesCon(int,int);
void visualizarSin(float);
void visualizarCon(float);

int main(){
	int a,b;
	introducir(&a);
	introducir(&b);
	float ns=euclidesSin(a,b);
	float nc=euclidesCon(a,b);
	visualizarSin(ns);
	visualizarCon(nc);
}
void introducir(int *x){
	do{
		printf("\nNumero : ");
		scanf("%d",x);
	}while (*x<=0);
}
float euclidesSin(int a,int b){
	int aux;
	if(b>a){
		aux=b;
		b=a;
		a=aux;
	}
	while(b!=0){
		aux=b;
		b=a%b;
		a=aux;
	}
	return a;
}
float euclidesCon(int a,int b){
	if(b==0){
		return a;
	}else{
		return euclidesCon(b, a % b);
	}
}
void visualizarSin(float ns){
	printf("\nEl numero sin recursiva es %.2f",ns);
}
void visualizarCon(float nc){
	printf("\nEl numero con recursiva es %.2f",nc);
}