//Registro de Estudiantes Universitarios:
//Crea una estructura para almacenar datos de 30 estudiantes (ID,
//nombre, apellido, edad y promedio). El programa debe:
//o Ingresar los datos.
//o Mostrar la lista completa.
//o Encontrar e imprimir el estudiante con el promedio más alto.
#include <stdio.h>
typedef struct{
	char nombre[20];
	char ape[20];
	int edad;
	float media;
}estu;
//prototipos
void introducir(estu[]);
void visualizar(estu[]);
int encontrar(estu[]);
void alto(estu[],int);

int main(){
	estu alu[3];
	introducir(alu);
	visualizar(alu);
	int x=encontrar(alu);
	alto(alu,x);
}
void introducir(estu alu[]){
	int i;
	for(i=0;i<3;i++){
		printf("\nEstudiante %d:\n",i+1);
		fflush(stdin);
		printf("Nombre: ");
		scanf("%[^\n]",alu[i].nombre);
		fflush(stdin);
		
		printf("Apellido: ");
		scanf("%[^\n]",alu[i].ape);
		fflush(stdin);
		do{
			printf("Edad: ");
			scanf("%d",&alu[i].edad);
		}while(alu[i].edad<0);
		
		do{
			printf("Media: ");
			scanf("%f",&alu[i].media);
		}while(alu[i].media<0);
	}
}

void visualizar(estu alu[]){
	int i;
	for(i=0;i<3;i++){
		printf("\nEstudiante %d:\n",i+1);
		printf("Nombre: %s\n",alu[i].nombre);
		printf("Apellido: %s\n",alu[i].ape);
		printf("Edad: %d\n",alu[i].edad);
		printf("Media: %.2f\n",alu[i].media);
	}
}

int encontrar(estu alu[]){
	int i,p=0;;
	float m=alu[0].media;
	for(i=0;i<3;i++){
		if(alu[i].media>m){
			m=alu[i].media;
			p=i;
		}
	}
	return p;
}

void alto(estu alu[],int x){
	printf("\nEl alumno con mejor promerio es %s",alu[x].nombre);
}
