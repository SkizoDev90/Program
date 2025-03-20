 #include <stdio.h>
//prototipos de funciones
void introducir(char[]);
void cambiar (char[],char[],char[],char[]);
void visualizar(char[]);

main(){
	printf("Cambiar secuencias");
	char cadena[30];
	char secu[10];
	char rem[10];
	char aux[40];
	introducir(cadena);
	visualizar(cadena);
	introducir(secu);
	introducir(rem);
	cambiar(cadena,secu,rem,aux);
	visualizar(aux);
}
void introducir(char t[]){
	printf("\nIntroduce cadena: ");
	scanf("%[^\n]",t);
	fflush(stdin);
}
void visualizar (char aux[]){
	printf("%s",aux);
}
void cambiar(char ca[],char se[],char re[],char aux[]){
	int i=0, j=0, k ,z;
	char a[10];
	while (ca[i]!='\0')
	{
			//Cada nueva palabra la vamos metiendo en una variable 
			//auxiliar a
		k=0;
		while (ca[i]!=' ' && ca[i]!='\0')
		{
			a[k++]=ca[i++];
		}
		a[k]='\0';
		
			//Comparamos cada palabra con la palabra que buscamos
		if (strcmpi(a,se)!=0){	//Si no es la que buscamos, pasamos la palabra a un aux
			i=i-strlen(a);
			for (;ca[i]!=' ' && ca[i]!='\0';)
				aux[j++]=ca[i++];
		}
		else{	//Si es la que buscamos, pasamos la nueva palabra a aux
			z=0;
			for (;re[z]!='\0';){
				aux[j++]=re[z++];
			}
		}
		aux[j++]=' ';
		i++;
	}
	aux[j]='\0';
}