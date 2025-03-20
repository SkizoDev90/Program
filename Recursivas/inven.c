//Busqueda dicotomica recursiva con estructuras y array dinamico.
#include <stdio.h>
#include <stdlib.h>
typedef struc {
	char nombre[30];
	int edad;
	float media;
}datos;
//prototipos 
void introducirtam(int*);
datos* malloca(int);
void cargar(datos[],int,int);		//con recursiva
void pedirnom(char[]);
void ordenar(datos[],int);
int buscar(datos[],int,char[],int,int,int);


int main{
	int tam;
	char apodo[25];
	introducirtam(&tam);
	datos *alu=malloca(tam);
	cargar(alu,tam,0);
	pedirnom(apodo);
	 ordenar(datos[],int);
	int x=buscar(alu,tam,apodo,0,tam-1,0);
}
void introducirtam(int *tam){
	int ok=0;
	do{
		printf("\nIntroduce numero: ");
		ok=scanf("%d",tam);
	}while(tam==0 &&tam>0);
}
datos* malloca(int tam){
	return (datos*)malloc(tam*sizeof(datos));
}
void cargar(datos alu[],int tam,int i){
	if(i==tam){
		return;
	}else{
		printf("\nNombre: ");
		scanf("%[^\n]",&alu[i].nombre);
		do{
			printf("\nEdad: ");
			scanf("%d",&alu[i].edad);
		}while(alu[i].edad<=0);
		do{	
			printf("\nMedia: ");
			scanf("%f",&alu[i].media);
		}while(alu[i].media<=0);
		return cargar(alu,tam,++i);
	}
}

void pedirnom(char apodo[]){
	int i;
	printf("\nQue nombre quieres buscar: ");
	do{
		apodo[i]=getche();
		i++;
	}while(apodo[i-1]!='\r');
	apodo[i]='\0';
}
int buscar(datos alu[],int tam,char apodo[],int ini,int fin,int m){
	if(strcmp(alu[m].nombre,apodo)==0){
		return 0;  //encontrado
	}
	m=(ini+fin/2);
	if(ini>fin){
		return 1;   //no encontrado
	}else{
		if(strcmp(alu[m].nombre>apodo)>0){
			fin=m-1;
		}else{
			ini=m+1;
		}
		return buscar(alu,tam,apodo,ini,fin,m);
	}
}