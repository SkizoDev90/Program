#include <stdio.h>
#include <string.h>
//variables
char cadena[5][5];
char frase[30];
int i,j,k,f=0,sw,largo;
main(){
	printf("Entra la frase: ");
	scanf("%s",&frase);
	sw=0;
	for(i=0;i<=4;i++&& sw==0){
		sw=1;
		for(j=0;j<=4;j++){
			if(frase[f]!=' '){
				cadena[i][j]=frase[f];
			}else if(frase[f]==' '){
				i++;
				f++;
				sw=0;
			}
			f++;
		}	
	}
	for(i=0;i<=9;i++){
		for(j=0;j<=4;j++){
			printf("\t %c",cadena[i][j]);
		}	
	}
}