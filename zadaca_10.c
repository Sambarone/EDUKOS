#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,max,min,br,i;
	printf("Koliko brojeva želiš unjeti ");
	scanf("%d",&n);
	printf("Unesi prvi broj ");
	scanf("%d",&br);
	max=br;
	min=br;
	
	for(i=1;i<n;i++)
	{
	printf("Unesi %d. broj ",i+1);
	scanf("%d",&br);
	if(br<min)
	{
		min=br;
		}
	else if(br>max){
		max=br;
	}	
	}
	printf("Najmanji je %d broj \n",min);
	printf("Najveæi je %d broj",max);
	return 0;
}
