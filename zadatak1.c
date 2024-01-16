#include <stdio.h>
#include <stdlib.h>

int zadatak1()
{
int f,b,br;
	printf("Unesi neki broj: ");
	scanf("%d",&br);
	f=1;
	b=1;
	while(b<br){
		f=f+b;
		b++;
		
	}
	printf("f je %d: ",f);
	return 0;
}
