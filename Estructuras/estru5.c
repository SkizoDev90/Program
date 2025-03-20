//Escribe un programa que en una estructura guarde los datos de 05 amigos y los
//muestre por pantalla, utilizando para ello un array de estructura, la misma
//estructura contendrá (Nombre, Apellido, Edad, Sexo, Dirección, y Teléfono).

#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char nombre[20];
	char apellido[20];
	int edad;
	char sexo[20];
	char direccion[30];
	char telefono[9];
}datos;

//protipo
void introducir(datos[]);
void visualizar (datos[]);

int main(){
	datos ami[5];
	introducir(ami);
	visualizar (ami);
}

void introducir(datos ami[]){
	int i;
	for(i=0;i<5;i++){
		printf("\nAmigo %d:\n", i + 1);
		
		printf("\nIntroduce Nombre: ");
		scanf("%[^\n]",ami[i].nombre);
		fflush(stdin);
		
		printf("\nIntroduce Apellido: ");
		scanf("%[^\n]",ami[i].apellido);
		fflush(stdin);
		do{
			printf("\nIntroduce edad: ");
			scanf("%d",&ami[i].edad);
			fflush(stdin);
		}while(ami[i].edad<=0);
			
		printf("\nIntroduce Sexo: ");
		scanf("%[^\n]",ami[i].sexo);
		fflush(stdin);
		
		printf("\nIntroduce direccion: ");
		scanf("%[^\n]",ami[i].direccion);
		fflush(stdin);
		
		printf("\nIntroduce telefono: ");
		scanf("%s",ami[i].telefono);
		fflush(stdin);
	}	
}

void visualizar (datos ami[]){
	int i;
	printf("\nDatos de los amimnos:\n");
    for (i=0;i<5;i++) {
        printf("\nAmigo %d:\n", i + 1);
        printf("Nombre: %s\n", ami[i].nombre);
        printf("Apellido: %s\n", ami[i].apellido);
        printf("Edad: %d\n", ami[i].edad);
        printf("Sexo: %s\n", ami[i].sexo);
        printf("Dirección: %s\n", ami[i].direccion);
        printf("Teléfono: %s\n", ami[i].telefono);
    }
}