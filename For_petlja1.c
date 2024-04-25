#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n, o;
	printf("Kioliko ocjena ",i);
	float suma=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Unesi %d. ocjenu ",i);
		scanf("%d",&o);
		printf("a je %d \n",o);
		suma=suma+o;
	}
	
	printf("Prosjek %f. ",suma/n);
		
	return 0;
}
