#include <stdio.h>
int t[4][4];
int i,j,sf,sc,sd,sdi,m,n;
main(){
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("Tabla t[%d][%d]=",i,j);
			scanf("%d" ,&t[i][j]);
		}
	}
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("\t%d" ,t[i][j]);
		}
		printf("\n");
	}
	sf=0;
	sc=0;
	sd=0;
	sdi=0;
	m=0;n=3;
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			if(i==0){
			sf=sf+t[i][j];
			}
			if(j==0){
				sc=sc+t[i][j];
			}
			if(j==i){
				sd=sd+t[i][j];
			}
			if(i==m && j==n){
				sf=sf+t[i][j];
				m++;
				n--;
			}
		}
	}	
	printf("\nSuma Fila = %d",sf);
	printf("\nSuma Columna = %d",sc);
	printf("\nSuma diagonal principal = %d",sd);
	printf("\nSuma diagonal secundaria = %d",sdi);
}