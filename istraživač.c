#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j, jed, des, stot, suma,umnozak;
	printf("Unesi tr prvi broj");
	scanf("%d",&i);
	printf("Unesi tr drugi broj");
	scanf("%d",&j);
	for(i;i<j;i++){
		jed=i%10;
		des=(i/10)%10;
		stot=i%100;
		suma=jed+des+stot;
		umnozak=jed*des*stot;
		printf("Suma je %d\n",suma);
		printf("Suma je %d\n",umnozak);
		
	}
	return 0;
}
