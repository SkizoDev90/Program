#include <stdio.h>
#include <conio.h>  

char frase[30];  
int i,c,ini,max;
int main() {
    i = 0;
    while(frase[i]!='\r'){
       	scanf("%[^\n]",frase); 
       	i++;
    }
    frase[i]='\0';
    
   	 ini=0; max=0; i=0;
    while(frase[i] != '\0'){
     	if(frase[i] != ' ') {
	    c++;
        }
		if((frase[i] == ' ' || frase[i+1]=='\0') && c>max){
        	max=c;
        	ini=i-c+1;
        	c=0;
		}
		i++;
	}
	printf("\nLa palabra mas larga tiene %d letras y empieza en la posicion %d",max,ini);
}