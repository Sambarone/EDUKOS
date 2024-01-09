#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int suma,a,b,i;
	suma=0;
	printf("Unesi koliko brojeva želiš unjeti ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		
		printf("Unesi %d. broj",i+1);
		scanf("%d",&b);
		suma=suma+b;
	}
	
	printf(" suma je %d!",suma);
	printf(" as je %f!",(float)suma/a);
	
	
	return 0;
}
