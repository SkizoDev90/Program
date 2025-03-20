#include <stdio.h>
int t1[4][4];
int t2[4][4];
int t3[4][4];
int i,j;

main(){
		for(i=0;i<=3;i++){
			for(j=0;j<=3;j++){
				printf("t1 [%d][%d] =",i,j);
				scanf("%d" ,&t1[i][j]);
			}
		}
		printf("\n");
		for(i=0;i<=3;i++){
			for(j=0;j<=3;j++){
				printf("t2 [%d][%d] =",i,j);
				scanf("%d" ,&t2[i][j]);
			}
		}
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("%d \t",t1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("%d \t",t2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			t3[i][j]=t1[i][j]+t2[i][j];
		}
		printf("\n");
	}
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("%d \t",t3[i][j]);
		}
		printf("\n");
	}
}