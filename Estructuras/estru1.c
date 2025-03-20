#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char nombre[30];
	int nota;
} not;
//portotipos
void introducir(not[]);
void ordenarNo(not[]);
void ordenarNu(not[]);
void nota (int*);
int buscar(not[],int);
void visualizarArray(not[]);

int main(){
	int n; 
	not alu[5];
	introducir(alu);
	ordenarNo(alu);
	visualizarArray(alu);
	ordenarNu(alu);
	visualizarArray(alu);
	nota(&n);
	int x = buscar(alu,n);
}
void introducir(not alu[]){
	int i;
	for(i=0;i<5;i++){
		printf("\nNombre: ");
		scanf("%[^\n]",alu[i].nombre);
		fflush(stdin);
		printf("\nNota: ");
		scanf("%d",&alu[i].nota);
			fflush(stdin);
	}
}
void ordenarNo(not alu[]){
	int i,j,sw;
	not aux;
	sw=0;
	for(i=0;i<5-1 && sw==0;i++){
		sw=1;
		for(j=0;j<(5-1)-i;j++){
			if(strcmp(alu[j].nombre,alu[j+1].nombre)>0){
				aux=alu[j+1];
				alu[j+1]=alu[j];
				alu[j]=aux;
				sw=0;
			}
		}
	}
}
void ordenarNu(not alu[]){
		int i,j,sw;
		not aux;
	sw=0;
	for(i=0;i<5-1 && sw==0;i++){
		sw=1;
		for(j=0;j<(5-1)-i;j++){
			if(alu[j].nota>alu[j+1].nota){
				aux=alu[j+1];
				alu[j+1]=alu[j];
				alu[j]=aux;
				sw=0;
			}
		}
	}
}
void nota (int *n){
	printf("\nQue nota quieres buscar: ");
	scanf("%d",n);
}
int buscar(not alu[],int n){
	int ini=0;
	int fin=4;
	int m=(ini+fin)/2;
	while(ini<=fin){
		if(alu[m].nota>n){
			fin=m-1;
		}else{
			ini=m+1;
		}
		m=(ini+fin)/2;
	}
	if(alu[m].nota==n){
		printf("\nEl alumno con la nota %d es el alumno %s",alu[m].nota,alu[m].nombre);
		
	}else{
		printf("\nNo hay nadie con esa nota");
	}
}
void visualizarArray(not alu[]) {
    printf("\nVisualizando todos los alumnos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nNombre = %s, Nota = %d\n",alu[i].nombre, alu[i].nota);
    }
}