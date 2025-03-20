//METODO Mezclas TIENES QUE ESTAR ORDENADO ANTES DE HACERLO
#include <stdio.h>
int t1[10]={1,3,5,6,7,13,24,25,30,36};
int t2[10]={1,2,4,6,17,19,20,21,23,26};
int t3[20];
int i,j,k;
main(){
	for(i=0,j=0,k=0; i<=9 && j<=9;){
		if(t1[i]<t2[j]){
			t3[k]=t1[i];
			i++;
		}else {
			t3[k]=t2[j];
			j++;
		}
		k++;
	}
	while(i<=9){
			t3[k]=t1[i];
			k++;
			i++;
			
		}
	while(j<=9){
		t3[k]=t2[j];
		k++;
		j++;
	}
	for(k=0;k<=19;k++){
		printf("\nt3[%d]= %d",k,t3[k]);
	}
}
