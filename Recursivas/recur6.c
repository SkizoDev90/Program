//Buscar un elemento en un array de forma recursiva (búsqueda secuencial).
#include <stdio.h>
#define N 5
//prototipo de funciones
void introducir (int[]);
void introducirN (int*);
int buscar(int[],int,int);
void encontrado(int);
void visualizarA(int[],int,int);

int main(){
	int t[N],x;
	introducir (t);
	introducirN (&x);
	int j=buscar(t,0,x);
	encontrado(j);
	visualizarA(t,0,N);
}
void introducir (int t[]){
	int i;
	for(i=0;i<N;i++){
		printf("\nt[%d]: ",i);
		scanf("%d",&t[i]);
	}
}
void introducirN (int *x){
	printf("\nNumero a buscar: ");
	int j;
	do{
		j=scanf("%d",x);
	}while(j==0);
}
void visualizarA(int t[],int ini,int n){
	if(ini>=n){
		return ;
	}else{
		printf("\nT[%d]: %d",ini,t[ini+1]);
		return visualizarA(t,ini+1,n);
	}
}
int buscar(int t[],int ini,int x){
	if(ini>=N){
		return 0;
	}else if(t[ini]==x){
		return 1;
	}else{
		return buscar(t,ini+1,x);
	}
}
void encontrado(int j){
	if(j==0){
		printf("\nNo encontrado");
	} else {
		printf("\nEncontrado");
	}
}