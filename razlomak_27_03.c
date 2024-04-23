#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Unesi brojnik: ");
	scanf("%d",&a);
	printf("Unesi nazivnik: ");
	scanf("%d",&b);
	
	
	razlomak(&a,&b);
	printf("%d/%d",a,b);
	
	return 0;
}


