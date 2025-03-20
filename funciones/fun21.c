#include <stdio.h>
//prototipos de funciones
void introducirA(int[]);
void introducirN(int*);
int buscar(int,int[]);
void visualizar(int);

int main(){
	printf("Encuentra el elemento y di su posicion por dicotomica");
	int t[10];
	int n,p;
	introducirA(t);
	introducirN(&n);
	p= buscar(n,t);
	if(p!=0){
		visualizar(p);
	}
}

void introducirA(int t[]){
	for(int i=0;i<10;i++){
		printf("\nt[%d]: ",i);
		scanf("%d",&t[i]);
	}
}

void introducirN(int *n){
	printf("\nIntroduce elemento a buscar: ");
	scanf("%d",n);
}

int buscar(int n,int t[]){
	int aux,sw,i,j;
	sw=0;
	for(i=0;i<9;i++ && sw==0){
		sw=1;
		for(j=0;j<9-i;j++){
			if(t[j]>t[j+1]){
				aux=t[j+1];
				t[j+1]=t[j];
				t[j]=aux;
				sw=0;
			}
		}
	}
	int ini=0;
	int fin=9;
	int m=(ini+fin)/2;
	while(ini<fin && t[m]!=n){
		if(t[m]>n){
			fin=m-1;
		}else{
			ini=m+1;
		}
		m=(ini+fin)/2;
	}
	if(t[m]==n){
		return m;
	}else{
		printf("\nNumero no encontrado");
		return 0;
	}
}

void visualizar(int p){
	printf("\nLa posicion del numero encontrado es %d",p);
}