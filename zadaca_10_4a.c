#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,br,poz,neg;
	poz=neg=0;
	printf("Koliko brojeva želiš unjeti");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Unesi %d br",i);
	scanf("%d",&br);
	if(br>0){
	poz++;	
	}
	else if(br<0){
		neg++;
	}
	else{
	}
	}
	
	printf("Poz %d je, a neg %d je",poz,neg);
	return 0;
}
