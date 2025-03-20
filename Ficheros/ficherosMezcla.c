#include <stdio.h>
typedef struct {
	int nal;
	char nombre[30];
	int nota[3];
}datos;
////// prototipos funciones
void opciones ();
void introducir_datos(datos*);
int leer(FILE*,datos*);
void grabar_datos(FILE*,datos);
void funcionGrabar(FILE*,datos*);
void funcionBorrar(FILE*,FILE*,datos);
void funcionModificar(FILE*,FILE*,datos*);
void funcionBuscar(FILE*,datos);

int main(){
	printf("Acciones con el fichero");
	FILE *fichero;
	FILE *aux;
	int n;
	datos alumno;
	opciones();
	do{
		printf("\n¿Que desea hacer con el fichero?: ");
		scanf("%d",&n);
	}while(n<0 || n>4);
	while(n!=0){
		switch(n) {
			////////opcion grabar
			case 1:
				funcionGrabar(fichero,&alumno);
				break;
			////////////opcion borrar	
			case 2:
				funcionBorrar(fichero,aux,alumno);
				break;
			//////////modificar datos
			case 3:
				funcionModificar(fichero,aux,&alumno);
				break;
			////////////////buscar alumno
			case 4:
				funcionBuscar(fichero,alumno);
				break;
		}
		do{
			printf("\n¿Que desea hacer con el fichero?: ");
			scanf("%d",&n);
		}while(n<0 || n>4);
		opciones();
	}
}
void opciones(){
		printf("\n1.Insertar Datos");
		printf("\n2.Borrar Datos");
		printf("\n3.Modificar Datos");
		printf("\n4.Buscar Datos");
		printf("\n0.Salir");
}
void introducir_datos(datos* alumno){
	int i=0;
	printf("\nIntroduce el numero de alumno: ");
	scanf("%d",&alumno->nal);
	fflush(stdin);
	printf("\nIntroduce Nombre de alumno: ");
	scanf("%[^\n]",&alumno->nombre);
	for(i=0;i<3;i++){
		printf("\nIntroduce nota %d: ",i+1);
		scanf("%d",&alumno->nota[i]);
	}
}
void grabar_datos(FILE* fichero ,datos alumno){
	int i=0;
	fprintf(fichero,"\n%d",alumno.nal);
	fprintf(fichero,"\n%s",alumno.nombre);
	for(i=0;i<3;i++){
		fprintf(fichero,"\n%d",alumno.nota[i]);
	}
}
int leer(FILE* fichero,datos *alumno){
	int i;
	if(fscanf(fichero,"\n%d",&alumno->nal)!=1){
		return -1;        								 ///no encontrado
	}
	fscanf(fichero,"\n%[^\n]",&alumno->nombre);
	for (i=0;i<=2;i++)
	{
		fscanf(fichero,"\n%d",&alumno->nota[i]);
	}
	return 0; 											/////encontrado
}

void funcionGrabar(FILE*fichero,datos *alumno){
	fichero=fopen("alumnos.txt","a+");
	while(!feof(fichero)){
		rewind(fichero);
		introducir_datos(&alumno);
		int x=leer(fichero,&alumno);
		if(x==-1){
			grabar_datos(fichero,alumno);     
		}else{
			printf("\nEl dato ya esta en el archivo");
		}
	}
	fclose(fichero);
}
void funcionBorrar(FILE*fichero, FILE*aux ,datos alumno){
	int n;
	do{
		printf("\n¿Que alumno desea borrar?: ");
		scanf("%d",&n);
	}while(n<0);
	fichero=fopen("alumnos.txt","r");
	aux=fopen("nuevo.txt","a");
	while(!feof(fichero)){
		int x=leer(fichero,&alumno);
		if(alumno.nal!=n && x!=-1){
		grabar_datos(aux,alumno);
		}
	}
	fclose(fichero);
	fclose(aux);
	remove("alumnos.txt");
	rename("nuevo.txt","alumnos.txt");
}
void funcionModificar(FILE*fichero, FILE*aux ,datos *alumno){
	int n;
	do{
		printf("\n¿Que alumno desea modificar?: ");
		scanf("%d",&n);
	}while(n<0);
	fichero=fopen("alumnos.txt","r");
	aux=fopen("nuevo.txt","a+");
	while(!feof(fichero)){
		int x=leer(fichero,&alumno);
		if(alumno->nal==n && x!=-1){
			introducir_datos(&alumno);
			grabar_datos(aux,alumno);
		}else{
			grabar_datos(aux,alumno);
		}
	}
	fclose(fichero);
	fclose(aux);
	remove("alumnos.txt");
	rename("nuevo.txt","alumnos.txt");	
}
void funcionBuscar(FILE*fichero ,datos alumno){
	int n,sw=0;
		do{
			printf("\n¿Que alumno desea buscar?: ");
			scanf("%d",&n);
		}while(n<0);
		fichero=fopen("alumnos.txt","r");
		while(!feof(fichero)&& sw==0){
			int x=leer(fichero,&alumno);
			if(alumno.nal==n && x!=-1){
				printf("\nDatos del alumno encontrados");
				sw=1;
			}
		}
		if(sw==0){
			printf("\nEl alumno aun no ha sido introducido");
		}
		fclose(fichero);
}