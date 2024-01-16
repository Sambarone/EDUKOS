#include <stdio.h>
#include <stdlib.h>

int zadatak6(){
	int n,broj, zbroj;
	zbroj=0;
	n=0;
	printf("Unesi neki broj ");
	scanf("%d",&broj);
	if(broj%2!=00)
	{
		zbroj=zbroj+broj;
		n++;
		}	
	
	while(broj!=0){
		printf("Unesi broj ");
		scanf("%d",&broj);
		if(broj%2!=0)
	{
		zbroj=zbroj+broj;
		n++;
		}
		
	}
	float as=(float)zbroj/n;
	printf("As neparnih brojeva je %f ",as);
	
	
	return 0;
}
