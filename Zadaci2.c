#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sati;
	int minute;
	int sekunde;
	
	printf("Unesi broj sati: ");
	scanf("%d",&sati);
	printf("Unesi broj minuta: ");
	scanf("%d",&minute);
	sekunde=sati*3600+minute*60;
	printf("Sekunde: %d", sekunde);
	
	
	
	return 0;
}
