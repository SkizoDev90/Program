#include <stdio.h>

//Funciones
void introducir(int*);
int fibo(int);


int main(){
    int a;
    printf("fibonazi");
    introducir(&a);
   	for (int i = 0; i <= a; i++) {
        printf("%d ", fibo(i));
    }
}

void introducir(int *x){
    printf("\nIntroducir N:");
    scanf("%d",x);
}
int fibo(int a){
	if(a==0||a==1){
		return 1;
	}else if(a>1){
		return(fibo(a-1)+fibo(a-2));
	}
}