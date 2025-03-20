#include <stdio.h>
#include <string.h>
typedef struct {
	int nal;
	char nombre[30];
	int nota[3];
}datos;
//prototipos de funcion
int leer(FILE*, datos *,int );
void introducir_datos(datos*);
void grabar(FILE*, datos);
int main(){
	printf("Ingreso de nuevos alumnos");
	datos alumno;
	FILE *fichero;
	FILE *temporal;
	int n,x;
	/////////////////abirmos los archivos
	fopen("Alumnos.txt","r");
	fopen("temporal.txt","w");
	/////////////////introducirmos numero
	printf("\n¿Que alumno quieres modificar?: ");
	scanf("%d",&n);
	////////////////vamos a buscar el alumno
	while(!feof(fichero)){
		x=leer(fichero,&alumno,n);
		if(x==-1){
			grabar(temporal,alumno);
		}else{
			introducir_datos(&alumno);
			grabar(temporal,alumno);
		}
	}
	////////////////cerramos los archivos
	fclose(fichero);
	fclose(temporal);
	////////////////remuevo y renombro
	remove("Alumnos.txt");
	rename("temporal.txt","Alumnos.txt");
}

void introducir_datos(datos *alumno){
	int i;
	fflush(stdin);
	printf("\nNombre alumno:");
	scanf("%d", &alumno->nal);
	fflush(stdin);
	printf("\nNombre alumno:");
	scanf("%[^\n]", &alumno->nombre);
	
	for (i=0;i<3;i++){
		printf("\nNota:",i+1);
		scanf("%d", &alumno->nota[i]);
	}
} 
void grabar(FILE* temporal, datos alumno){
	int i;
	fprintf(temporal,"\n%d",alumno.nal);
	fprintf(temporal,"\n%s",alumno.nombre);
	for (i=0;i<=2;i++)
	{
		fprintf(temporal,"\n%d",alumno.nota[i]);
	}
}
int leer(FILE *fichero, datos *alumno,int n){
	int i;
	fscanf(fichero,"%d",&alumno->nal);
	fscanf(fichero,"%s",&alumno->nombre);
	for(i=0;i<3;i++){
		fscanf(fichero,"%d",&alumno->nota[i]);
	}
	if(alumno->nal==n){
		return -1;
	}else{
		return 0;
	}
}