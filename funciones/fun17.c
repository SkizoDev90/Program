#include <stdio.h>

//prototipos de funcion
void introducir(int[]);
void ordenar (int[]);
void visualizar(int[]);

main(){
	printf("Ordena el Array por burbuja");
	int t[5];
	introducir(t);
	ordenar(t);
	visualizar(t);
}
void introducir(int t[]){
	for(int i=0;i<5;i++){
		printf("\nt[%d]: ",i);
		scanf("%d",&t[i]);
	}
}

void ordenar (int t[]){
	int aux,i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(t[j]>t[j+1]){
				aux=t[j+1];
				t[j+1]=t[j];
				t[j]=aux;
			}
		}
	}	
}

void visualizar(int t[]){
	for(int i=0;i<5;i++){
		printf("\t %d",t[i]);
	}
}
