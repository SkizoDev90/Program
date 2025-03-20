#include <stdio.h>

//prototipos de funcion
void introducir(int[]);
int buscar(int[]);
void visualizar(int);

int main(){
	printf("Visualizar la posicion del mayor");
	int t[5];
	introducir(t);
	int p=buscar(t);
	visualizar(p);
}
void introducir(int t[]){
	for(int i=0;i<5;i++){
		printf("\nt[%d]: ",i);
		scanf("%d",&t[i]);
	}
}

int buscar(int t[]){
	int pe=t[0];
	int p=0;
	
	for(int i=0;i<5;i++){
		if(t[i]<pe){
			pe=t[i];
			p=i;
		}
	}
	return p;
}

void visualizar(int p){
	printf("\nLa posicion del mas pequeño es %d",p);
}
