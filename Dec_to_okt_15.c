#include <stdio.h>
#include <stdlib.h>

//program unosi decimalni broj i pretvara ga u oktalni

int i;

int main(int argc, char *argv[]) {
	//unos dekadskog broja
	int a, b[10], j;
	printf("Unesi neki dekadski broj :");
	scanf("%d", &a);
	//poziv funkcije za pretvaranje 
	pretvori(b,a);
	//ispis oktalnog broja
	for(j=i-1;j>=0;j--){
		printf("%d",b[j]);
	}
	return 0;
}
//funkcija pretvaranja
void pretvori (int b[10], int a)
{
	i=0;
	while (a!=0){
		b[i]=a%7;
		a=a/7;
		i++;
	}
}
