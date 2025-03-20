#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float banca[2];
float jugador[3];
int premios[10]={1,2,4,10,15,30,75,150,750,1000};
int bonus[2]={300,500,7500};
int i,p,nr;
float sb,sj;

int main(){
	srand(time(NULL));
	//introducimos el numero de boletos
	do{
        printf("\nCuantos boletos quiere: ");
        scanf("%d",&p);
    }while(p<0);
    
	while(p>0){
		do{
		sb=0;
			//numeros para la banca
			for(i=0;i<2;i++){
				banca[i]=rand()%8;
				if(banca[i]==0){
					banca[i]=0.5;
				}
			}
			//suma banca
			for(i=0;i<2;i++){
				sb=sb+banca[i];
			}
		}while(sb>7.5);
		//numeros para el jugador
		for(i=0;i<3;i++){
			jugador[i]=rand()%8;
			if(jugador[i]==0){
				jugador[i]=0.5;
			}
		}
		//suma jugador
		sj=0;
		for(i=0;i<3;i++){
			sj=sj+jugador[i];
		}
		//visualizar numeros de la banca
		for(i=0;i<2;i++){
			printf("\t %.2f",banca[i]);
		}
		printf("\n");
		//visualizar numero del jugador
		for(i=0;i<3;i++){
			printf("\t %.2f",jugador[i]);
		}
		printf("\n");
		//optenemos un numero random para el bonus
		nr=rand()%8;
		printf("\nEl numero estrella es %d",nr);
		//vemos si ganamos bonus
		for(i=0;i<3;i++){
			if(jugador[i]==nr){
				printf("\n Has ganado el bonus!!!!");
				printf("\n El bonus que has ganado es de %d euros",bonus[rand()%2]);
				i=3;
			}
		}
		// comprobar si tengo premio
		if(sj>sb && sj<8){
			if(sj==7.5){
				printf("\n Premio doble !!!!!");
			}
			printf("\n Has ganado premio!!!!!");
			printf("\n El premio que has ganado es de %d euros",premios[rand()%10]);	
			i=3;
		}else{
			printf("\n Te ha ganado la banca");
		}
		p--;
		printf("\n");
	}
}