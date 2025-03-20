//Desarrolle una estructura que guarde los datos de los n alumnos de la materia
//programación en Lenguaje C, y los muestres por pantalla, la estructura debe
//tener (dni, nombre, apellido, edad, profesión, lugar de nacimiento, dirección y
//teléfono).
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char dni[9];
	char nombre[20];
	char apellido[20];
	int edad;
	char profesion[20];
	char lugarnacimiento[20];
	char direccion[30];
	char telefono[9];
}datos;

//protipo
void cantidadalu(int*);
datos* malloca(int);
void introducir(datos[],int);
void visualizar (datos[],int);

int main(){
	int n;
	cantidadalu(&n);
	datos *alu=malloca(n);
	introducir(alu,n);
	visualizar (alu,n);
	free(alu);
}

void cantidadalu(int*n){
	printf("\nCuantos alumnos hay:");
	scanf("%d",n);
}
datos* malloca(int n){
	return (datos*)malloc(n * sizeof(datos));
}

void introducir(datos alu[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nAlumno %d:\n", i + 1);
		printf("\nIntroduce Dni: ");
		scanf("%s",alu[i].dni);
		fflush(stdin);
		
		printf("\nIntroduce Nombre: ");
		scanf("%[^\n]",alu[i].nombre);
		fflush(stdin);
		
		printf("\nIntroduce Apellido: ");
		scanf("%[^\n]",alu[i].apellido);
		fflush(stdin);
		do{
			printf("\nIntroduce edad: ");
			scanf("%d",&alu[i].edad);
			fflush(stdin);
		}while(alu[i].edad<=0);
			
		printf("\nIntroduce Profesion: ");
		scanf("%[^\n]",alu[i].profesion);
		fflush(stdin);
		
		printf("\nIntroduce lugar de nacimiento: ");
		scanf("%[^\n]",alu[i].lugarnacimiento);
		fflush(stdin);
		
		printf("\nIntroduce direccion: ");
		scanf("%[^\n]",alu[i].direccion);
		fflush(stdin);
		
		printf("\nIntroduce telefono: ");
		scanf("%s",alu[i].telefono);
		fflush(stdin);
	}	
}

void visualizar (datos alu[],int n){
	int i;
	printf("\nDatos de los alumnos:\n");
    for (i=0;i<n;i++) {
        printf("\nAlumno %d:\n", i + 1);
        printf("DNI: %s\n", alu[i].dni);
        printf("Nombre: %s\n", alu[i].nombre);
        printf("Apellido: %s\n", alu[i].apellido);
        printf("Edad: %d\n", alu[i].edad);
        printf("Profesión: %s\n", alu[i].profesion);
        printf("Lugar de nacimiento: %s\n", alu[i].lugarnacimiento);
        printf("Dirección: %s\n", alu[i].direccion);
        printf("Teléfono: %s\n", alu[i].telefono);
    }
}