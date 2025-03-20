#include <stdio.h>
int t[4][4]={
		{1,15,14,4},
		{12,6,7,9},
		{8,10,11,5},
		{13,3,2,16},
};
int m=0,s;
char sw;
void numerocomparador(void);
void sumarfilas(void);
void sumarcolumnas(void);
void sumardiagonalsec(void);
void sumardiagonal(void);
void validar(void);

main(){
	sw='s';
	numerocomparador();
	sumarfilas();
	sumarcolumnas();
	sumardiagonalsec();
	sumardiagonal();
	validar();
}

	//resultado a comparar
void numerocomparador(void){
		for(int i=0;i<1;i++){
			for(int j=0;j<4;j++){
				m=m+t[i][j];
			}
		}
}

	//suma filas
void sumarfilas(void){
	for(int i=0;i<4;i++){
		s=0;
		for(int j=0;j<4 && sw=='s';j++){
			s=s+t[i][j];
		}
		if(s!=m){
			sw='n';
		}
	}
}
	
	//suma columnas
void sumarcolumnas(void){
	for(int i=0;i<4 && sw=='s';i++){
	s=0;
		for(int j=0;j<4;j++){
			s=s+t[j][i];
		}
		if(s!=m){
			sw='n';
		}
	}
}

	//suma diagonal secundaria
void sumardiagonalsec(void){
	s=0;
	for(int i=0;i<4 && sw=='s';i++){
		for(int j=0;j<4;j++){
			if(j==3-i){
			s=s+t[j][i];
			}
		}
	}
	if(s!=m){
		sw='n';
	}
}
	
	//suma diagonal
void sumardiagonal(void){
	s=0;
	for(int i=0;i<4 && sw=='s';i++){
		for(int j=0;j<4;j++){
			if(i==j){
			s=s+t[j][i];
			}
		}
	}
}
void validar(void){
	if(s!=m){
		sw='n';
	}
	if(sw=='s'){
		printf("es magico");
	}
	else{
		printf("NO es magico");
	}
}
	
