#include <stdio.h>
//prototipo de funcion
void introducirA(int []);
void introducirN(int*);
int buscar (int,int[]);
void visualizar(int);

int main(){
	printf("busca el numero");
	int t[5];
	int n,r;
	introducirA(t);
	introducirN(&n);
	r= buscar(n,t);
	visualizar(r);
}

void introducirA(int t[]){
	for(int i=0;i<5;i++){
		printf("\nt[%d]: ",i);
		scanf("%d",&t[i]);
	}
}

void introducirN(int *n){
	printf("\nIntroduce numero a buscar: ");
	scanf("%d",n);
}

int buscar (int n,int t[]){
	for(int i=0;i<5;i++){
		if(t[i]==n){
			return 1;
		}
	}
	return -1;
}
void visualizar(int r){
	if(r!=-1){
		printf("\nNumero encontrado");
	}else{
		printf("\nNumero no encontrado");
	}
}

