#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("Unesi prvi broj: ");
	scanf("%d",&a);
	if(a<0)
	printf("%d",a+1);
	else
	printf("%d",a-1);
	
	

	
	return 0;
}
