#include <stdio.h>
char cadena[30];
char n;
int cv,i;
main(){
	cv=0;
	i=0;
	printf("\nMete char: ");
	scanf("%c" ,&n);
	while(n!='.'){
		fflush(stdin);
		if (n!='a' && n!='e' && n!='i' && n!='o' && n!='u' && n!='A' && n!='E' && n!='I' && n!='O' && n!='U'){
			cadena[i]=n;
			i++;
		}else if ((n=='a' || n=='e' || n=='i' || n=='o' || n=='u'|| n=='A' || n=='E' || n=='I' || n=='O' || n=='U') && cv<5){
			cadena[i]=n;
			cv++;
			i++;
		} else {
			printf("no puedes meter mas vocales");
		}
		printf("\nMete char: ");
		scanf("%c" ,&n);
	}
	printf("\t %s",cadena);
}