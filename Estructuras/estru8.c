//A partir de la declaración de las siguientes estructuras realice un programa en C
//que lea el array "ats" y devuelva los datos (nombre, pais, deporte) del atleta que
//ha ganado mayor número de medallas.
#include <stdio.h>
typedef struct{
	char nombre[40];
	char pais[25];
}datos;
typedef struct{
	char deporte[40];
	datos pers;
	int nmedallas;
}atleta;

//prototipos
void introducir(atleta[]);
int buscar(atleta[]);
void visualizar(atleta[],int);

int main(){
	atleta ats[3];
	
	introducir(ats);
	int x=buscar(ats);
	visualizar(ats,x);
}
void introducir(atleta ats[]){
	int i;
	for(i=0;i<3;i++){
		printf("\nAtleta %d \n",i+1);
		
		printf("Nombre: ");
		scanf("%[^\n]",ats[i].pers.nombre);
		fflush(stdin);
		
		printf("Pais :");
		scanf("%[^\n]",ats[i].pers.pais);
		fflush(stdin);
		
		printf("Deporte: ");
		scanf("%[^\n]",ats[i].deporte);
		fflush(stdin);
		
		printf("Numero de medallas: ");
		scanf("%d",&ats[i].nmedallas);
		fflush(stdin);
	}
}

int buscar(atleta ats[]){
	int i;
	int m=0;
	for(i=0;i<3;i++){
		if(ats[i].nmedallas>m){
			m=i;
		}
	}
	return m;
}

void visualizar(atleta ats[],int x){
	printf("\nEl atleta con mas medallas es %s" ,ats[x].pers.nombre);
}