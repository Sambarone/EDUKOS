#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,bin,i;
	n=0;
	i=0;
	printf("Unesi neki broj ");
	scanf("%d",&bin);
	
	while(bin>0)
	{
		if(bin%10>1){
		printf("Nisi unio binarni broj ");	
		bin=0;
		}
		if(bin%10==1){
			n=n+pow(2,i);
		}
	
	i++;
	bin=bin/10;	
	}
	
	
	printf("Broj je %d ",n);
	return 0;
}
