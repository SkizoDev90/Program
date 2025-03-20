#include <stdio.h>
//prototipo de funcion
int introducir (void);
int comparar (int,int,int);
void visualizar(int);

int main(){
	printf("Mas grande");
	int n1=introducir();
	int n2=introducir();
	int n3=introducir();
	int j=comparar (n1,n2,n3);
		visualizar(j);
	
}
int introducir(void){
	int x=0;
	printf("\nIntroduce numero: ");
	scanf("%d",&x);
	return x;
}
int comparar(int a, int b, int c){
	if(a>b && a>c){
		return a;
	}else if(b>a && b>c){
		return b;
	}else{
		return c;
	}
}
void visualizar(int jj){
	printf("\t%d",jj);
}