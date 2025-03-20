#include <stdio.h>
typedef struct{
	int nal;
	char nombre[30];
	int nota[3];
}datos;
///////////////////////////////////prototipos de funciones
char buscar(FILE*,int);
void leer(FILE*);
void alta(int);

int main(){
	printf("Gestionar alumnos");
	FILE*fichero;
	datos alumno;
	int aux;
	//////////////////////////////abrir fichero y pedir numero
	fichero=fopen("alumnos.dat","r+");
	printf("\n\nNumero de alumno: ");
	scanf("%d",aux);
	//////////////////////////////mientras el numero aux sea distinto de 0
	while(aux!=0){
		existe=buscar(fichero,aux);
		if(existe='n'){
			fclose(fichero);
			alta(aux);
			fichero=fopen("alumnos.dat","r+");
		}else{
			modificar_borrar();
		}
		printf("\n\nNumero de alumno: ");
		scanf("%d",aux);
	}
}
char buscar(FILE* fichero,int aux){
	if(fichero==null){
		return 'n';
	}
	rewind(fichero);
	leer(fichero);
	while(!feof(fichero)&&alumno.nal!=aux){
		leer(fichero);
	}
	if(alumno.nal=aux){
		return 's';
	}
	return 'n';
}
void alta(int aux){
	char opc;
	do{
		printf("\n¿Alta o Salir?");
		scanf("%c",opc);
	}while(opc!='a'|| opc!='n');
	if(opc=='a')
}
