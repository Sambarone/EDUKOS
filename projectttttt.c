#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=4;
	int b=2;
	b=i++;
	printf("%d b je \n",b);
	printf("%d i je \n",i);
	i=(--b)-i;
	printf("%d b je \n",b);
	printf("%d i je \n",i);
	
	return 0;
}
