#include <stdio.h>
int t[4][4]={
		{1,1,1,1},
		{3,2,3,2},
		{3,3,3,3},
		{4,4,4,4},
};
int i,j,s,sf,sd,sdi;
main(){
	for(i=0;i<4;i++){
		s=0;
		for(j=0;j<4;j++){
			s=s+t[j][i];
		}
		printf("\nsuma de la columna = %d",s);
	}
	s=0;
	for(i=0;i<4;i++){
		sf=0;
		for(j=0;j<4;j++){
			sf=sf+t[i][j];
		}
		printf("\nsuma de la fila = %d",sf);
	}
	sd=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				sd=sd+t[i][j];
			}
		}
	}
	printf("\nsuma de la diagonal = %d",sd);
	sdi=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(j==3-i){
				sdi=sdi+t[i][j];
			}
		}
	}
	printf("\nsuma de la diagonal inversa= %d",sdi);
}