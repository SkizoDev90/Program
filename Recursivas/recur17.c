/*Para hallar el MCD (máximo común divisor) de dos enteros x e y se puede considerar
que:

mcd(x,y) = y  			si (y_x) && (x%y = O)
mcd(x,y) = mcd(y,x) si (x<y)
mcd(x,y) = mcd(y,x%y) en caso que una de las anteriores no suceda.

a) Implemente la versión recursiva de la función mcd(x,y)
b) Implemente la versión iterativa de la función mcd(x,y)
Nota: p%q denota la operación módulo (residuo entero de la división entera)*/
#include <stdio.h>
//prototipo de funciones
void introducirN (int*);
float calcular(int,int);
void visualizar(int);

int main(){
	int x,y;
	introducirN (&x);
	introducirN (&y);
	float z=calcular(x,y);
	visualizar(z);
}
void introducirN (int *x){
	int j;
	do{
		printf("Introducir numero: ");
		fflush(stdin);
		j=scanf("%d",x);
	}while(j==0 && x<=0);
}
float calcular(int x,int y){
	if(y==0){
		return x;
	}else{
		return calcular(y,x%y);
	}
}
void visualizar(int z){
	printf("El resultado es %d",z);
}
