#include <stdio.h>
//prototipos de funciones
void introducir(int[]);
void ordenar(int[]);
void cargar(int[],int[],int[]);
void visualizar(int[]);

int main(){
	int t1[5];
	int t2[5];
	int t3[10];
	introducir(t1);
	introducir(t2);
	ordenar(t1);
	ordenar(t2);
	cargar(t1,t2,t3);
	visualizar(t3);
}

void introducir(int t[]){
	for(int i=0;i<5;i++){
		printf("\nt[%d]: ",i);
		scanf("%d",&t[i]);
	}
}

void ordenar (int t[]){
	int aux,i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(t[j]>t[j+1]){
				aux=t[j+1];
				t[j+1]=t[j];
				t[j]=aux;
			}
		}
	}	
}

void cargar(int t1[],int t2[],int t3[]){
	int i=0,j=0,k=0;
	
	while(i<5 || j<5){
		if(t1[i]<t2[j]){
			t3[k]=t1[i];
			i++;
			k++;
		}else{
			t3[k]=t2[j];
			j++;
			k++;
		}
		if(i==5){
			t3[k]=t2[j];
			j++;
			k++;
		}
		if(j==5){
			t3[k]=t1[i];
			i++;
			k++;
		}
	}
}

void visualizar(int t[]){
	for(int i=0;i<=9;i++){
		printf("\t %d",t[i]);
	}
}