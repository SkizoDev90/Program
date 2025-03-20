//Realizar un programa en C que lea en un array de estructuras los datos de los N
//trabajadores de la empresa y que imprima los datos del empleado con mayor y
//menor salario.
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char nombre[30];
	char sexo[12];
	float salario;
}nomina;
//prototipo
void introducirN(int*);
nomina* malloca(int);
void datosNomina(nomina[],int);
void visualizar (nomina[],int);
void ordenar(nomina[],int);

int main(){
	int n;
	introducirN(&n);
	nomina *emple=malloca(n);
	datosNomina(emple,n);
	ordenar(emple,n);
	visualizar (emple,n);
	free(emple);
}
void introducirN(int *n){
	do{
		printf("Cuantos trabajadores: ");
		scanf("%d",n);
	}while(*n<=0);
}
nomina* malloca(int n){
	return (nomina*)malloc(n*sizeof(nomina));
}

void datosNomina(nomina emple[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nEmpleado %d\n",i+1);
		fflush(stdin);
		printf("Nombre: ");
		scanf("%[^\n]",emple[i].nombre);
		fflush(stdin);
		
		printf("Sexo: ");
		scanf("%[^\n]",emple[i].sexo);
		fflush(stdin);
		
		printf("Salario:");
		scanf("%f",&emple[i].salario);
	}
}

void visualizar (nomina emple[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nEmpleado %d\n",i+1);
		
		printf("Nombre: %s\n",emple[i].nombre);
		printf("Sexo: %s\n",emple[i].sexo);
		printf("Salario: %.2f\n",emple[i].salario);	
	}
}
void ordenar(nomina emple[],int n){
	int sw=0,j,i;
	nomina aux;
	for(i=0;i<n-1 && sw==0;i++){
		sw=1;
		for(j=0;j<(n-1)-i;j++){
			if(emple[j].salario>emple[j+1].salario){
				aux=emple[j+1];
				emple[j+1]=emple[j];
				emple[j]=aux;
				sw=1;
			}
		}
	}
	printf("\nEl empleado con el salario mas alto es %s",emple[n-1].nombre);
	printf("\nEl empleado con el salario mas bajo es %s",emple[0].nombre);
}