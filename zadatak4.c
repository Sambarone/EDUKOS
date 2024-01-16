#include <stdio.h>
#include <stdlib.h>

int zadatak4(){
	int broj, zbroj, n;
	zbroj=0;
	
	printf("Unesi neki broj ");
	scanf("%d",&broj);
	zbroj=zbroj+broj;
	n=1;
	while(broj%2==0){
		printf("Unesi %d broj ",n+1);
		scanf("%d",&broj);
		zbroj=zbroj+broj;
		n++;
	}
	printf("Unio si %d brojeva, a njihova suma je %d ",n,zbroj);
	
	
	return 0;
}
