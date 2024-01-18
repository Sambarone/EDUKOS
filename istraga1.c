#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j;
	int jed,des,stot;
	int suma=0;
	int proizvod;
	
	printf("Unesi prvi broj");
	scanf("%d",&i);
	printf("Unesi drugi broj");
	scanf("%d",&j);
	while(i<=j)
	{
		suma=0;
		jed=i%10;
		des=(i/10)%10;
		stot=i/100;
		suma=jed+des+stot;
		proizvod=jed*des*stot;
		if(suma==proizvod){
				printf("Bomba  je %d\n",i);
		}
	
		i++;
		
	}
	
	return 0;
}
