#include <stdio.h>
//prototipo de funcion
int introducir (void);
int euclides (int,int);
void visualizar(int);

int main(){
	printf("Mas grande");
	int n1=introducir();
	int n2=introducir();
	int j=euclides (n1,n2);
		visualizar(j);
	
}
int introducir(void){
	int x=0;
	do{
		printf("\nIntroduce numero: ");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
int euclides (int a, int b){
	int r=0; int aux;
	if(b>a){ ///si el segundo es mas grande lo cambio
		aux=a;
		a=b;
		b=aux;
	}
	while(a%b!=0){
		r=a%b;
		if(r==0){
			return b;
		}else{
			aux=b;
			b=r;
			a=aux;
		}
	}
	return b;
}
void visualizar(int jj){
	printf("\nEl maximo comun divisor (MCD) es %d",jj);
}