#include <stdio.h>
#include <string.h>
typedef struct {
	int nal;
	char nombre[30];
	int nota[3];
}datos;
//prototipos de funcion
void introducir_datos(datos*);
int buscar(FILE*,const char*);
void grabar(FILE*,datos);

int main(){
	printf("Ingreso de nuevos alumnos");
	FILE *fichero;
	datos alumnonuevo;
	
	fichero=fopen("Alumnos.txt","a+");
	
	printf("\nNumero de alumno: ");
	scanf("%d",&alumnonuevo.nal);
	
	while(alumnonuevo.nal != 0){
		introducir_datos(&alumnonuevo);
		
		fseek(fichero, 0, SEEK_SET);          ///Necesito buscar desde el principio del fichero sino empezaria a buscar desde el final de la ultima busqueda 
		
		if(buscar(fichero, alumnonuevo.nombre)==0){
			grabar(fichero, alumnonuevo);
			printf("\nAlumno agregado.");
		
		}else{
			printf("\nEl alumno ya ha sido introducido");
		}
			printf("\nNumero alumno:");
			scanf("%d", &alumnonuevo.nal);
	}
	fclose(fichero);
}

void introducir_datos(datos *alumnonuevo){
	int i;
	fflush(stdin);
	printf("\nNombre alumno:");
	scanf("%[^\n]", &alumnonuevo->nombre);
	
	for (i=0;i<3;i++){
		printf("\nNota:",i+1);
		scanf("%d", &alumnonuevo->nota[i]);
	}
} 
int buscar(FILE *fichero,const char *alumnobuscado){
	
	while(!feof(fichero)){
		int i;
		datos alumnonuevo;
		fscanf(fichero,"%d",&alumnonuevo.nal);
		fscanf(fichero,"%s",&alumnonuevo.nombre);
		
		for(i=0;i<3;i++){
			fscanf(fichero,"%d",&alumnonuevo.nota[i]);
		}
	
		if(strcmpi(alumnonuevo.nombre,alumnobuscado) == 0){
			return 1;
		}
	}
	return 0;
}
void grabar(FILE* fichero, datos alumnonuevo){
	int i;
	fprintf(fichero,"\n%d",alumnonuevo.nal);
	fprintf(fichero,"\n%s",alumnonuevo.nombre);
	for (i=0;i<=2;i++)
	{
		fprintf(fichero,"\n%d",alumnonuevo.nota[i]);
	}
}