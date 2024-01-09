#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,br;
	float as,suma;
	suma=0;
	printf("Koliko brojeva želiš unjeti");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Unesi %d br",i);
	scanf("%d",&br);
	suma=suma+br;
	}
	as=suma/n;
	printf("As %f je",as);
			return 0;
}
