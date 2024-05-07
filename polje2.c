#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10], b[5], i;
	for (i=0;i<10;i++){
		printf("Unesi %d èlan niza ", i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		b[i]=a[i]+a[9-i];
	}
	
	for(i=0;i<5;i++){
		printf("%d \t", b[i]);
	}
	return 0;
}
