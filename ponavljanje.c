#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int suma=0;

	for (i=0;i<=10;i=i+i)
	{
			suma=suma+i;
			printf("%d.korak je suma %d \n",i,suma);
	
		
	}
//	printf("%d",suma);
	
	
	return 0;
}
