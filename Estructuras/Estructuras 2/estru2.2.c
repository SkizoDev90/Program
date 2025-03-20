//Inventario de Productos en Tienda:
//Define una estructura para un producto (código, nombre, categoría,
//precio y cantidad en stock). Realiza un programa que:
//o Permita ingresar n productos.
//o Busque productos por categoría.
//o Actualice la cantidad en stock.
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char codigo[20];
	char nombre[20];
	char categoria;
	float precio;
	int stock;
}producto;
//prototipos
void introducirN(int*);
producto* malloca(int);
void introducir(producto[],int);
void visualizar(producto[],int);
void introducirC(char*);
void buscar (producto[],int,char);


int main(){
	int n;
	char c;
	introducirN(&n);
	producto *inven=malloca(n);
	introducir(inven,n);
	visualizar(inven,n);
	introducirC(&c);
	buscar (inven,n,c);
}
void introducirN(int *n){
	do{
		printf("Cuantos productos hay: ");
		scanf("%d",n);
	}while(*n<=0);	
}
producto* malloca(int n){
	return (producto*)malloc(n*sizeof(producto));
}
void introducir(producto inven[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nProducto %d:\n",i+1);
		fflush(stdin);
		printf("Codigo: ");
		scanf("%[^\n]",inven[i].codigo);
		fflush(stdin);
		
		printf("Nombre: ");
		scanf("%[^\n]",inven[i].nombre);
		fflush(stdin);
		do{
			printf("Categoria: ");
			scanf(" %c",&inven[i].categoria);
			fflush(stdin);
		}while(inven[i].categoria < 'a' || inven[i].categoria > 'z');
		
		do{
			printf("Precio: ");
			scanf("%f",&inven[i].precio);
		}while(inven[i].precio<0);
		
		do{
			printf("Stock: ");
			scanf("%d",&inven[i].stock);
		}while(inven[i].stock<0);
	}
}
void visualizar(producto inven[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nProducto %d:\n",i+1);
		printf("Codigo: %s\n",inven[i].codigo);
		printf("Nombre: %s\n",inven[i].nombre);
		printf("Categoria: %c\n",inven[i].categoria);
		printf("Precio: %.2f\n",inven[i].precio);
		printf("Stock: %d\n",inven[i].stock);
	}
}
void introducirC(char *c){
	do{
		fflush(stdin);
		printf("\nCategoria a buscar: ");
		scanf("%c",c);
		fflush(stdin);
	}while(*c < 'a' || *c > 'z');
}
void buscar (producto inven[],int n,char c){
	int i;
	for(i=0;i<n;i++){
		if(inven[i].categoria==c){
			printf("\nCodigo: %s\n",inven[i].codigo);
			printf("Nombre: %s\n",inven[i].nombre);
			printf("Categoria: %c\n",inven[i].categoria);
			printf("Precio: %.2f\n",inven[i].precio);
			printf("Stock: %d\n",inven[i].stock);
		}
	}
}

