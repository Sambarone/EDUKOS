#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,br;
	float as,suma;
	suma=0;
	
	for(i=0;i<8;i++){
	printf("Unesi %d br",i+1);
	scanf("%d",&br);
	suma=suma+br;
	}
	as=suma/8;
	printf("As %f je",as);
	return 0;
}
