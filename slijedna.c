#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x;
	float f;
	
	printf("Unesi neki broj: ");
	scanf("%d",&x);
	
	if(x<0)
	f=pow(x,2);
	else if (x=0)
	f=0;
	else 
	f=sqrt(x);
	
	
	
	
	return 0;
}
