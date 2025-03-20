#include <stdio.h>
//Prototipo de funciones
float introducir(void);
float comprobar(float ,float);
void visualizar(float );

main(){
	printf("Area\n");
	float a=introducir();
	float b=introducir();
	float r=comprobar( a, b);
	visualizar(r);
}
float introducir(void){
	float x=0;
	printf("Dato: ");
	scanf("%f" ,&x);
	return x;
}
float comprobar(float aa,float bb){
	float r=0;
	r=aa*bb;
	return r;
}
void visualizar(float r){
	printf("\nEl area es %.2f",r);
}