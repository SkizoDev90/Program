#include <stdio.h>
//prototipos
void introducir (char[]);
int comprobar (char[],char[]);
void visualizar(int);

int main(){
	printf("Comprobar cadenas");
	int t1[10];
	int t2[10];
	introducir(t1);
	introducir(t2);
	int r= comprobar (t1,t2);
	visualizar(r);
}
void introducir(char t[]){
	printf("\nIntroducir cadena: ");
	scanf("%[^\n]",t);
	fflush(stdin);
}
int comprobar(char t1[],char t2[]){
	int i=0,j=0;
	while(t1[i]!='\0'){
		if(strcmpi(t1,t2)==0){
			return 0;
		}else if(strcmpi(t1,t2)<0){
			return -1;
		}else{
			return 1;
		}
	}
}
void visualizar(int r){
	if(r==0){
		printf("\nLas cadenas son iguales");
	}else if(r==1){
		printf("\nLa cadena T1 es mayor");
	}else{
		printf("\nLa cadena T2 es mayor");
	}
}