#include <stdio.h>

//Funciones
void introducir(int*);
int calcularR(int ,int );
int calcularS(int ,int );
void visualizar(int,int);


int main(){

    int a,b;

    printf("Multiplicacion por suma");

    introducir(&a);
    introducir(&b);
   int r=calcularR(a,b);
   int s=calcularS(a,b);
    visualizar(r,s);
}

void introducir(int *x){
    printf("\nIntroducir N:");
    scanf("%d",x);
}
int calcularR(int a,int b){
	if(b==1){
		return a;
	}else{
		return a+calcularR(a,b-1);
	}
}
int calcularS(int a,int b){
	int i,s=0;
	for(i=0;i<b;i++){
		s=s+a;
	}
	return s;
}
void visualizar(int r,int s){
    printf("\n El resultado con recursiva es %d",r);
	printf("\n El resultado sin recursiva es %d",s);
}
