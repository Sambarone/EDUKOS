#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, bin;
	bin=0;
	int i=0;
	printf("Unesi neki broj");
	scanf("%d",&n);
	while(n>0)
	{
	bin=bin+pow(10,i)*(n%2);	
	i++;
	n=n/2;	
	}
	
	printf("Broj je %d",bin);
	return 0;
}
