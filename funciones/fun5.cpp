#include <stdio.h>
//prototipo de funcion
int introducir (void);
int potencia (int,int);
void visualizar(int);
int main(){
	printf("Potencia");
	int b=introducir();
	int e=introducir();
	int p=potencia(b,e);
	visualizar (p);
}
int introducir(void){
	int x=0;
	do{
		printf("\nPrimero base y despues exponente: ");
		scanf("%d",&x);
	}while(x<0);
	return x;
}
int potencia(int bb ,int ee){
	int r=bb; 
	for (int i = 1; i < ee ; i++) {
        r=r*bb;
    }
    return r;
}
void visualizar(int pp){
	printf("\n%d",pp);
}