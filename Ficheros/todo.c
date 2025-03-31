#include <stdio.h>
#include <string.h>
#define N 30
typedef struct{
	int nal;
	char nombre[N];
	int nota[3];
}datos;
////////////////////////////////prototipo de funciones
void menu(int*);
void introducir_datos();
char buscar(FILE*,int);
void leer(FILE*,datos*);
void grabar_datos(FILE*,datos);
void cargar_datos(datos*,int);
void borrar();
void borrado(FILE*,datos);
void visualizar(FILE*fichero,datos alu);
void ordenacion(datos[],int);
datos* dimensionar(int);
void obtener_tam(FILE*,int*);
int main(){
	printf(">>>>>>>>>>>>>>Tiene de todoooooooooo!!!<<<<<<<<<<<<<<<<");
	FILE*fichero;
	datos alu;
	int opc;
	menu(&opc);
	switch(opc){
		case 1:
			introducir_datos();
			break;
		case 2:
			borrar();
			break;
		case 3:
			modificar();
			break;
		case 5:
			ordenar();
			break;
		case 4:
			ordenar();
			dicotomica();
			break;
		case 6:
			visualizar(fichero,alu);
			break;
		case 0:
			printf("\nSaliendo.....");
			return 0;
	}
}
void menu(int *opc){
	do{
		printf("\n1.Introducir");
		printf("\n2.Borrar");
		printf("\n3.Modificar");
		printf("\n4.BuscarDicotomica");
		printf("\n5.Ordenar");
		printf("\n6.Visualizar");
		printf("\n7.Salir.");
		printf("\n\nQue opcion desea: ");
		scanf("%d",opc);
	}while(*opc>7||*opc<0);
}
void introducir_datos(){
	FILE*fichero;
	char letra;
	datos alu;
	int aux;
	fichero=fopen("alumnos.dat","rb+");
	rewind(fichero);
	if(fichero==NULL){
		printf("\nEl archivo no existe");
		do{
			fflush(stdin);
			printf("\n\nQuieres crear el archivo e introducir el alumno(s/n)");
			scanf("%c",&letra);
		}while(letra!='s'&& letra!='n');
		if(letra=='s'){
			fichero=fopen("alumnos.dat","ab");
			fclose(fichero);
			introducir_datos();
		}else{
			return 0;
		}
	}else{
		printf("\nNumero de alumno: ");
		scanf("%d",&aux);
		char existe=buscar(fichero,aux);
		if(existe=='s'){
			printf("\nAlumno ya esta introducido");
			return 0;
		}else{
			cargar_datos(&alu,aux);
			grabar_datos(fichero,alu);
		}
	}
	fclose(fichero);
}
char buscar(FILE*fichero,int aux){
	datos alu;
	leer(fichero,&alu);
	while(!feof(fichero)){
		if(alu.nal==aux){
			return 's';
		}
		leer(fichero,&alu);
	}
	return 'n';
}
void leer(FILE*fichero, datos *alu){
	fread(alu,sizeof(datos),1,fichero);
}
void grabar_datos(FILE*fichero, datos alu){
	fwrite(&alu,sizeof(datos),1,fichero);
}
void cargar_datos(datos *alu,int aux){
	int i;
	alu->nal=aux;
	fflush(stdin);
	printf("\nNombre del alumno: ");
	scanf("%[^\n]",alu->nombre);
	for(i=0;i<3;i++){
		printf("\nNota[%d]",i+1);
		scanf("%d",&alu->nota[i]);
	}
	printf("\nGrabado");
}
void borrar(){
	FILE*fichero;
	datos alu;
	int aux;
	fichero=fopen("alumnos.dat","rb+");
	if(fichero==NULL){
		printf("\nEl archivo no existe");
	}else{
		printf("\nNumero de alumno: ");
		scanf("%d",&aux);
		char existe=buscar(fichero,aux);
		if(existe=='s'){
			fseek(fichero,-sizeof(datos),SEEK_CUR);
			borrado(fichero, alu);
			printf("\nAlumno borrado");
		}
	}
	fclose(fichero);
}
void modificar(){
	FILE*fichero;
	datos alu;
	int aux;
	fichero=fopen("alumnos.dat","rb+");
	rewind(fichero);
	if(fichero==NULL){
		printf("\nEl archivo no existe");
	}else{
		printf("\nNumero de alumno: ");
		scanf("%d",&aux);
		char existe=buscar(fichero,aux);
		if(existe=='s'){
			fseek(fichero,-sizeof(datos),SEEK_CUR);
			cargar_datos(&alu,aux);
			grabar_datos(fichero,alu);
			printf("\nAlumno modificado");
		}
	}
	fclose(fichero);
}
void borrado(FILE*fichero, datos alu){
	alu.nal=0;
	fwrite(&alu,sizeof(datos),1,fichero);
}
void visualizar(FILE*fichero,datos alu){
	int i;
	fichero=fopen("alumnos.dat","rb");
	leer(fichero,&alu);
		while(!feof(fichero)){
			if(alu.nal!=0){
				printf("\nNumero de alumno: %d",alu.nal);
				printf("\nNombre: %s",alu.nombre);
				for(i=0;i<3;i++){
					printf("\nNota[%d]: %d",i+1,alu.nota[i]);	
				}
			}	
			leer(fichero,&alu);	
		}
	fclose(fichero);
}
void ordenar(){
	FILE*fichero;
	FILE*auxfi;
	datos alu;
	datos*alumno;
	int tam,i=0;
	
	fichero=fopen("alumnos.dat","rb");
	obtener_tam(fichero,&tam);
	rewind(fichero);
	alumno=dimensionar(tam);
	
	leer(fichero,&alu);
	while(!feof(fichero)){
		alumno[i]=alu;
		printf("\ncosas");
		i++;
		leer(fichero,&alu);
	}
	fclose(fichero);
	
	ordenacion(alumno,tam);
	
	auxfi=fopen("auxiliar.dat","wb");
	for(i=0;i<tam;i++){
		grabar_datos(auxfi,alumno[i]);
	}
	fclose(auxfi);
	remove("alumnos.dat");
	rename("auxiliar.dat","alumnos.dat");
}
void obtener_tam(FILE*fichero,int *tam){
	fseek(fichero,0,SEEK_END);
	*tam=ftell(fichero)/sizeof(datos);
}
datos* dimensionar(int tam){
	return(datos*)malloc(tam*sizeof(datos));
}
void ordenacion(datos alumno[],int tam){
	int i,j;
	datos aux;
	for(i=0;i<tam-1;i++){
		for(j=0;j<tam-i-1;j++){
			if(alumno[j].nal>alumno[j+1].nal){
				aux=alumno[j];
				alumno[j]=alumno[j+1];
				alumno[j+1]=aux;
			}
		}
	}
}
void dicotomica(){
	FILE*fichero;
	FILE*auxfi;
	datos alu;
	int aux;
	datos*alumno;
	int tam,i=0;
	
	fichero=fopen("alumnos.dat","rb");
	obtener_tam(fichero,&tam);
	rewind(fichero);
	alumno=dimensionar(tam);	
	leer(fichero,&alu);
	while(!feof(fichero)){
		alumno[i]=alu;
		i++;
		leer(fichero,&alu);
	}
	printf("\nNumero de alumno a buscar: ");
	scanf("%d",&aux);
	int ini=0;
	int fin=tam-1;
	int m,sw=0;
	while (ini <= fin) { 
	    m = (ini + fin) / 2;
	    
	    if (alumno[m].nal == aux) { 
	        sw = 1;
	        break;
	    } else if (aux > alumno[m].nal) { 
	        ini = m + 1;
	    } else { 
	        fin = m - 1;
	    }
}
	if(sw==1){
		printf("\nEncontrado en la posicion %d",m);
	}else{
		printf("\nAlumno no encontrado");
	}
	fclose(fichero);
}