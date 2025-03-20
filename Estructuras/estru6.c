//Escriba un programa que en una estructura se lleve el control de un inventario
//de cintas de una tienda de video. Asegúrese de que la estructura incluya el titulo
//de la cinta, la longitud de la cinta, el precio de alquiler, la fecha en que se vendió,
//y la clasificación de la cinta.
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int m;
	int d;
	int a;
}fecha;
typedef struct{
	char titulo[20];
	int duracionmin[5];
	float precio;
	fecha fecha;
	char clasificacion[10];
	char telefono[9];
}cinta;

//protipo
void introducir(cinta[]);
void visualizar (cinta[]);

int main(){
	cinta inven[5];
	introducir(inven);
	visualizar (inven);
}

void introducir(cinta inven[]){
	int i;
	for(i=0;i<5;i++){
	
		printf("\nIntroduce titulo: ");
		scanf("%[^\n]",inven[i].titulo);
		fflush(stdin);
		
		do{
		printf("\nIntroduce Duracion: ");
		scanf("%d",&inven[i].duracionmin);
		}while(inven[i].duracionmin<=0);
		
		do{
			printf("\nIntroduce precio: ");
			scanf("%f",&inven[i].precio);
		}while(inven[i].precio<=0);
		fflush(stdin);
		
		printf("\nIntroduce Clasificacion: ");
		scanf("%[^\n]",inven[i].clasificacion);
		fflush(stdin);
		
		printf("\nIntroduce telefono: ");
		scanf("%s",inven[i].telefono);
		fflush(stdin);
		
		printf("\nIntroduce Dia: ");
		scanf("%d",&inven[i].fecha.d);
		
		printf("\nIntroduce Mes: ");
		scanf("%d",&inven[i].fecha.m);
		fflush(stdin);
		printf("\nIntroduce Año: ");
		scanf("%d",&inven[i].fecha.a);
	}	
}

void visualizar (cinta inven[]){
	int i;
	printf("\nDatos del inventario:\n");
    for (i=0;i<5;i++) {
        printf("titulo: %s\n", inven[i].titulo);
        printf("Duracion: %s\n", inven[i].duracionmin);
        printf("Precio: %.2f\n", inven[i].precio);
        printf("Clasificacion: %s\n", inven[i].clasificacion);
        printf("Telefono: %s\n", inven[i].telefono);
        printf("Fecha: %d/%d/%d \n", inven[i].fecha.d,inven[i].fecha.m,inven[i].fecha.a);
    }
}