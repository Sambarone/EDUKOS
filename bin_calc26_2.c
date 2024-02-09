#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dek,bin,pom,i;
	bin=0;
	i=0;
	printf("Unesi neki dekadski broj: ", dek);
	scanf("%d",&dek);
	
	while(dek>0){
		pom=dek%2;
		bin=bin+pom*pow(10,i);
		i++;
		dek=dek/2;
	}
	
	printf("Binarni broj je: %d", bin);
	
	
	return 0;
}
