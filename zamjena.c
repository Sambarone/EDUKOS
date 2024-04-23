#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=5;
	int b=4;
	zam(&a,&b);
	printf("a je %d  b je %d",&a,&b);
	return 0;
}

int zam(int *x, int *y)
{
	int z=*x;
	*x=*y;
	*y=z;
	return 0;
}


