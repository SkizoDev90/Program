#include <stdio.h>
//prototipo de funcion
int introducir (void);
int comprobar (int);
void visualizar(int);
int main(){
	printf("Numero primo o no");
	int a=introducir();
	int r=comprobar(a);
	visualizar (r);
}
int introducir(void){
	int x=0;
	do{
		printf("\nNumero: ");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
int comprobar(int aa){
	int i=0; 
	for (int i = 2; i <= aa || aa!=0; i++) {
        if (aa % i == 0) {
            return 0;
        }else{
        	return 1;
		}
    }
}
void visualizar(int r){
	printf("\n%d",r);
}