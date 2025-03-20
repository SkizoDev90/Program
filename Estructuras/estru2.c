#include <stdio.h>
typedef struct{
	int d;
	int m;
	int a;
}fecha;

typedef struct{
	char expe[20];
	char nombre[20];
	int nota;
	fecha naci; 
}datos;

//prototipos de funcion
void introducir(datos[]);
int introA(void);
int introM(void);
int introD(int,int);
void visualizar (datos[]);

int main(){
	printf("Notas de alumnos");
	datos alu[2];
	introducir(alu);
	visualizar (alu);
}
void introducir(datos alu[]){
	int i;
	for(i=0;i<2;i++){
		printf("\nNumero de expediente: ");
		scanf("%s",alu[i].expe);
		fflush(stdin);
		
		printf("\nNombre: ");
		scanf("%[^\n]",alu[i].nombre);
		fflush(stdin);
		do{
			printf("\nNota: ");
			scanf("%d",&alu[i].nota);
		}while(alu[i].nota<0 ||alu[i].nota>10);
	
		
		alu[i].naci.a=introA();
		alu[i].naci.m=introM();
		alu[i].naci.d=introD(alu[i].naci.a,alu[i].naci.m);
	}
}
void visualizar (datos alu[]){
	int i;
	for(i=0;i<2;i++){
        printf("Nombre: %s\n", alu[i].nombre);
        printf("Expediente: %s\n", alu[i].expe);
        printf("Nota: %d\n", alu[i].nota);
        printf("Fecha de nacimiento: %d/%d/%d\n", alu[i].naci.d, alu[i].naci.m, alu[i].naci.a);
	}
}
int introA(){
	int x;
	do{
		printf("\nAño: ");
		scanf("%d",&x);
	}while (x<1920 || x>2020);
	return x;
}
int introM(){
	int x;
	do{
		printf("\nMes: ");
		scanf("%d",&x);
	}while (x<1 || x>12);
	return x;
}
int introD(int a,int m){
	int x;
	int r= m%2;   
	          
	if(r==0 && m!=2){
		do{
			printf("\nDia: ");
			scanf("%d",&x);
		}while (x<0 || x>30);
		return x;
	}else if (r!=0){
		do{
			printf("\nDia: ");
			scanf("%d",&x);
		}while (x<0 || x>31);
		return x;
	}else{
		if (m == 2) {
	        if ((a%4 == 0 && a% 100 != 0) || (a% 400 == 0)) {
	        	do{
					printf("\nDia: ");
					scanf("%d",&x);
				}while (x<0 || x>29);
				return x; 
			}
        }else{
            do{
				printf("\nDia: ");
				scanf("%d",&x);
			}while (x<0 || x>28);
			return x;
        }
	}
}