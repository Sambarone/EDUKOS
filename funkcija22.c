#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,o,p;
	
	printf("Unesi prvi broj\n");
	scanf("%d",&a);
	printf("Unesi drugi broj\n");
	scanf("%d",&b);
	o=opseg(a,b);
	p=povrsina(a,b);
	printf("Opseg je %d\n",o);
	printf("Opseg je %d\n",p);
	
	
	return 0;
}

int zbroj(int x, int y){
	int z;
	z=x+y;
	return z;
}

int opseg(int x, int y){
	int z;
	z=2*(x+y);
	return z;
}

int povrsina(int x, int y){
	int z;
	z=x*y;
	return z;
}
