#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int i;
	printf("Unesi duljinu polja");
	scanf("%d", &a);
	
	int b[a];
	for ( i=0;i<a;i++){
		printf("Unesi vrijednost ");
		scanf("%d",&b[i]);
		
	}
	
	for (i=0;i<a;i++){
		printf("%d\t ",b[i]);
		}
	
	return 0;
}
