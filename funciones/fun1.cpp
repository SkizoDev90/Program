#include <stdio.h>

//Prototipo de funciones
int introducir(void);
int comprobar(int ,int ,int );
void visualizar(int );

main(){
	printf("Mayor\n");
	int a=introducir();
	int b=introducir();
	int c=introducir();
	int mayor=comprobar( a, b , c);
	visualizar(mayor);
}
int introducir(void){
	int x=0;
	printf("Dato: ");
	scanf("%d" ,&x);
	return x;
}
int comprobar(int aa,int bb,int cc){
	if(aa>bb && aa>cc){
		return aa;
	}else if(bb>aa && bb>cc){
		return bb;
	}else{
		return cc;
	}
}
void visualizar(int mayor){
	printf("\nEl mayor es %d",mayor);
}
