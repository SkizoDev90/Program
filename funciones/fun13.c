#include <stdio.h>
//prototipos de funcion
void introducir(int *tt);
int comprobar(int *tt);
void visualizar(int);
int a;
int main(){
	int t[5];
	introducir(t);
	a=comprobar(t);
	visualizar(a);
}
void introducir (int *tt){
	int i;
	printf("Visualizar el mayor");
	for(i=0;i<5;i++){
		printf("\n t[%d]: ",i);
		scanf("%d",&tt[i]);
	}
}
void visualizar(int mm){
	printf("\nEl numero mayor es: %d",mm);
}
int comprobar (int *tt){
	int a=tt[0];
	int i;
	for(i=0;i<5;i++){
		if(tt[i]>a){
			a=tt[i];
		}
	}
	return a;
}