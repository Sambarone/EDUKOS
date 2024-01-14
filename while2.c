#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Unesi prvi broj: ");
	scanf("%d",&a);
	printf("Unesi drugi broj: ");
	scanf("%d",&b);
	
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;	
	}
	printf("%d",a);
	return 0;
}
