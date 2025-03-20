#include <stdio.h>
#include <string.h>  // Para manejar cadenas de texto

char frase[5][30];  // Matriz para almacenar las frases
int contador[6];

int main() {
    int i, j, cpalabra;

    // Leer 5 frases
    for(i = 0; i < 5; i++) {
        printf("Mete frase: ");
        scanf("%[^\n]",&frase[i]);
        fflush(stdin);
    }
    for(i = 0; i < 5; i++) {
        j = 0;
        while(frase[i][j] != '\0') {
            if(frase[i][j] == ' ') {
                j++;
            } else {
                // Contar la longitud de la palabra
                cpalabra = 0;
                while(frase[i][j] != ' ' && frase[i][j] != '\0') {
                    cpalabra++;
                    j++;
                }
                if(cpalabra == 1) {
                    contador[0]++;
                } else if(cpalabra == 2) {
                    contador[1]++;
                } else if(cpalabra == 3) {
                    contador[2]++;
                } else if(cpalabra == 4) {
                    contador[3]++;
                } else if(cpalabra == 5) {
                    contador[4]++;
                } else if(cpalabra > 5) {
                    contador[5]++;
                }
            }
        }
    }
    for(i=0;i<6;i++){
    		printf("\t %d",contador[i]);
	} 
}
