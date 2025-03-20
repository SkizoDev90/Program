#include <stdio.h>
//prototipo de funcion
int introducir (void);
int primo (int);
void visualizar(int);

int main(){
	printf("Primo");
	
	int n1=introducir();
	int n2=introducir();
	
	for(int i = n1; i<=n2;i++){
		int j=primo(i);
		if(j==1){
			visualizar(i);
		}
	}
	return 0;
}
int introducir(void){
	int x=0;
	do{
		printf("\nNumero: ");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
int primo(int ii){
	if(ii<=1){
		return 0;
	}
	
	for(int n=2;n*n <=ii;n++){
		if(ii%n ==0){
			return 0;
		}
	}
	return 1;
}
void visualizar(int pp){
	printf("\nNumero %d es primo",pp);
}