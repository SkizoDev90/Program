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
	int ini=0,fin=0,l=0,i=0,k,j,sw;
	while(ca[i]!='\0'){                     				//voy llevando la cadena principal hasta el final
		while(ca[i]!=' ' && ca[i]!='\0'){                  //llevo al espacio
			i++;
		}
		fin=i;                              				//la posicion del espacio sera el fin
		j=0;
		sw=0;
		while(ini<fin && se[j]!='\0' && sw==0){            // hago que vaya la cadena principal desde el inicio al fin
			if(ca[ini]==se[j]){	          					//si coincide va aumentando
				ini++;
				j++;
			}else{
				while(ca[ini]!=' '){       					 //sino se cargara la palabra en aux y el inicio sera la posicion del fin (es decir el espacio mas una celda)y se sale del bucle
					aux[l++]=ca[ini++];
				}
				aux[l]=' ';   
				ini=fin+1;
				sw=1;
			}
		}
		k=0;
		if(sw==0){				          					// si ha llegado con el sw=0 quiere decir que la secuencia es igual 
			while(re[k]!='\0'){		        				//hago que la cadena remplazo vaya hasta el final y que se vaya cargando en aux
				aux[l++]=re[k++];
			}
		    aux[l]=' ';                    					 //cuando acabe que añada un espacio
			ini=fin+1;			            				// y inicio pasa a ser el fin para comprobar la siguiente palabra
		}					     		    
	}
	aux[l]='\0';
}