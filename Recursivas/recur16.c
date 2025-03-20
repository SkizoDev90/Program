#include <stdio.h>
#include <stdlib.h>
//prototipo de funciones
void introducirTAM(int*);
int* malloca(int);
void cargar (int[],int,int);
void visualizar(int[],int);
void maxmin(int[],int,int,int,int);
void suma(int[],int,int,int);
void producto(int[],int,int,int);
void media(int[],int,int,int,int);

int main(){
	int tam;
	introducirTAM(&tam);
	int *t=malloca(tam);
	cargar (t,tam,0); 					//con recursivas
	visualizar(t,tam);
	maxmin(t,tam,t[0],0,0);				//con recursivas
	suma(t,tam,0,0);					//con recursivas
	producto(t,tam,0,1);				//con recursivas
	media(t,tam,0,0,0);					//con recursivas
}
void introducirTAM(int *x){
    printf("\nIntroducir tamaño:");
    scanf("%d",x);
}
int* malloca(int tam){
	return (int*)malloc(tam*sizeof(int));
}
void cargar (int t[],int tam,int i){
	if(i==tam){
		return;
	}else{												
		printf("\n t[%d]= ",i);
		scanf("%d",&t[i]);
		return cargar(t,tam,i+1);
	}
}
void visualizar(int t[],int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("\n t[%d]: %d",i,t[i]);
	}
}
void maxmin(int t[],int tam,int min,int max,int i){
	if(t[i]>max){
		max=t[i];
	}
	if(t[i]<min){
		min=t[i];
	}
	if(i==tam-1){
		printf("\nEl maximo es %d",max);
		printf("\nEl minimo es %d",min);
		return;
	}else{
	
		return maxmin(t,tam,min,max,i+1);
	}
}
void suma(int t[],int tam,int i,int s){
	if(i==tam){
		printf("\nLa suma es %d",s);
		return;
	}else{
		s=s+t[i];
		return suma(t,tam,i+1,s);
	}
}
void producto(int t[],int tam,int i,int p){
	if(i==tam){
		printf("\nEl producto es %d",p);
		return;
	}else{
		p=p*t[i];
		return producto(t,tam,i+1,p);
	}
}
void media(int t[],int tam,int m,int i,int s){
	if(i==tam){
		m=s/tam;
		printf("\nLa Media es %d",m);
		return;
	}else{
		s=s+t[i];
		return media(t,tam,m,i+1,s);
	}
}
