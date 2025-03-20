#include <stdio.h>
int t[4][4]={
		{1,15,14,4},
		{12,6,7,9},
		{8,10,11,5},
		{13,3,2,16},
};
int i,j,m,sw,s;
main(){
	m=0;
	sw=0;
	for(i=0;i<1;i++){
		for(j=0;j<4;j++){
			m=m+t[i][j];
		}
	}
	//suma filas
	for(i=0;i<4;i++){
		s=0;
		for(j=0;j<4 && sw==0;j++){
			s=s+t[i][j];
		}
		if(s!=m){
			printf("\nno es magico");
			sw=1;
			return 0;
		}
	}
	//suma columnas
	for(i=0;i<4 && sw==0;i++){
		s=0;
		for(j=0;j<4;j++){
			s=s+t[j][i];
		}
		if(s!=m){
			printf("\nno es magico");
			sw=1;
			return 0;
		}
	}
	//suma diagonal secundaria
	s=0;
	for(i=0;i<4 && sw==0;i++){
		for(j=0;j<4;j++){
			if(j==3-i){
			s=s+t[j][i];
			}
		}
	}
	if(s!=m){
		printf("\nno es magico");
		sw=1;
		return 0;
	}
	//suma diagonal
	s=0;
	for(i=0;i<4 && sw==0;i++){
		for(j=0;j<4;j++){
			if(i==j){
			s=s+t[j][i];
			}
		}
	}
	if(s!=m){
		printf("\nno es magico");
		sw=1;
		return 0;
	}
	if(s==m){
		printf("es magico");
	}
}