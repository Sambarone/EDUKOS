#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	x=unos();
	y=unos();
	//	printf("%d",umnozak(x,y));
	
	//printf("Aposlutna vrijednost unesnog broja je: %d",apsolutna(x) )	;
	printf("Veæi broj je: %d",veci(x,y))	;
	return 0;
}

