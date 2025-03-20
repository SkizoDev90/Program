//En una tienda donde sólo hay 10 productos se desea calcular el total de ganancia que produjo dicho negocio este mes. 
//Para ello se cuenta por producto con:referencia del producto, precio de costo, precio de venta, y cantidad vendida en ese periodo. 
//Realizar programa que permita calcular las Ganancias de la Tienda.
#include <stdio.h>
typedef struct{
	char ref[20];
	float costo;
	float venta;
	int vendido;
}pro;

//prototipos funciones
void introducir(pro[]);
float calcular(pro[],int);
void visualizar(pro[],float,int);

int main(){
	printf("Ganancias");
	pro lista[2];
	int i,j=2;
	
	introducir(lista);
	for(i=0;i<j;i++){
		float x=calcular(lista,i);
		visualizar(lista,x,i);
	}
}

void introducir(pro lista[]){
	int i;
	for(i=0;i<2;i++){
		fflush(stdin);
		printf("\nReferencia: ");
		scanf("%[^\n]",lista[i].ref);
		fflush(stdin);
		
		do{
			printf("\nPrecio costo: ");
			scanf("%f",&lista[i].costo);
		}while(lista[i].costo<0);
		
		do{
		printf("\nPrecio venta: ");
		scanf("%f",&lista[i].venta);
		}while(lista[i].venta<0);
		
		do{
		printf("\nCuanto se ha vendido: ");
		scanf("%d",&lista[i].vendido);
		}while(lista[i].vendido<0);
	}
}
float calcular(pro lista[],int i){
	int x;
		x=(lista[i].venta-lista[i].costo)*lista[i].vendido;
		return x;
}
void visualizar(pro lista[],float x,int i){
		printf("\nDel producto %s la ganancia es %.2f",lista[i].ref,x);	
}