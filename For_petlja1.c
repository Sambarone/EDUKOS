#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,a;
	for(i=1;i<=10;i++){
		printf("Unesi %d. broj ",i);
		scanf("%d",&a);
		printf("a je %d \n",a);
	}
	return 0;
}
