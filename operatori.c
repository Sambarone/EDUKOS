#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int suma=0;
	char c='C';
	char b;
	printf("Unesi i");
	scanf("%d",&i);
	int j,k;
	while(i>0){
		printf("Unesi bolest");
		scanf(" %c",&b);
				if(b=='C'){
				j=i%10;
				suma=suma+j;
				}
	i=i*1/10;	
	}
	printf("Suma je %d",suma);
	return 0;
}
