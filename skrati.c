#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,manji;
	int i=2;
	printf("Unesi prvi broj: ");
	scanf("%d",&a);
	
	printf("Unesi prvi broj: ");
	scanf("%d",&b);
	
	manji=b;
	if(a<b)
	manji=a;
	
	while(i<=manji)
	{
		if(a%i==0 && b%i==0){
		a=a/i;
		b=b/i;
		
		}
		else {
	
		i++;	}
		}
	printf("prvi broj: %d ",a);
	printf("drugi broj: %d ",b);
		
	return 0;
}
