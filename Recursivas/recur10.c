//Suma los dígitos de un número de forma recursiva.
#include <stdio.h>
void introducirN(int*);
int calcular (int);

int main(){
	int n;
	introducirN(&n);
	printf("%d",calcular (n));
}
void introducirN(int *n){
	printf("\nIntroduce numero:");
	int x;
	do{
		x=scanf("%d",n);
	}while(x==0 && n<=0);
}
int calcular (int n){
	
	if(n%10==0){
		return 0;
	}else{
		int r=n/10;	
		return r+calcular(n-(n%10));
	}
	
}