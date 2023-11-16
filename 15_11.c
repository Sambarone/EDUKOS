#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int u=45*3;
	int s=5;
	
	int p1,p2,p3;
	
	printf("Unesi trajanje prvog poziva u minutama: ");
	scanf("%d",&p1);
	printf("Unesi trajanje drugog poziva u minutama: ");
	scanf("%d",&p2);
	printf("Unesi trajanje treceg poziva u minutama: ");
	scanf("%d",&p3);
	
	int p=(p1+p2+p3)*60*5;
	int cijena=p+u;
	int kuna=cijena/100;
	int lipa=cijena%100;
	
	printf("Poziv je koštao %d kuna i %d lipa",kuna,lipa);

	
	return 0;
}
