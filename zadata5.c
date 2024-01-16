#include <stdio.h>
#include <stdlib.h>

int zadatak5(){
	int broj, zbroj;
	zbroj=0;
	
	printf("Unesi neki broj ");
	scanf("%d",&broj);
	if(broj%3==00 || broj%7==0)
	{
		zbroj=zbroj+broj;
		}	
	
	while(broj!=5){
		printf("Unesi broj ");
		scanf("%d",&broj);
		if(broj%3==0 || broj%7==0)
	{
		zbroj=zbroj+broj;
		}
		
	}
	printf("Zbroj brojeva djeljivih s 3 ili 7 je %d ",zbroj);
	
	
	return 0;
}
