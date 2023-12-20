#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	int a,i,n,suma;
	float as;
	suma=0;
	printf("Unesi koliko brojeva želiš unjeti");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Unesi %d. broj\n",i+1);
		scanf("%d",&a);
		suma=suma+a;
		
	}
	as=suma/(float)n;
	printf("Unio si %d brojeva i njihova suma je %d\n",n, suma);
	printf("Aritmetièka sredina je %.2f",as);
	*/
	
	int i,suma;
	suma=0;
	for(i=1;i<=30;i++){
		
		if(i%9==0){
			
			printf("%d\n",i);
			suma=suma+i;
			printf("suma je %d\n",suma);
		}
		
	}
	
	return 0;
}
