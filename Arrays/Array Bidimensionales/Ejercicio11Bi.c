#include <stdio.h>
float t[2][6];
float m,s;
int i,j,n;
main(){
	for(i=0;i<=1;i++){
		m=0;
		s=0;
		do{
			printf("\nNumero de notas: ");
			scanf("%d" ,&n);
		}while(n<2 || n>5);
		for(j=0;j<=n-1;j++){
			do{
				printf("\nAlumno %d =",i);
				scanf("%f" ,&t[i][j]); 
			}while(t[i][j]<0 || t[i][j]>10);
			s=s+t[i][j];
		}
		m=(float)s/n;
		t[i][6]=m;
	}
	for(i=0;i<=1;i++){
		for(j=0;j<=5;j++){
			printf("%.2f \t",t[i][j]);
		}
		printf("\n");
	}
}