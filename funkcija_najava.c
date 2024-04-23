#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float potencija(float x,float y);

int main(int argc, char *argv[]) {
	float x,y,c;
	printf("Unesi stranicu trokuta ");
	scanf("%f",&x);
	printf("Unesi drugu  stranicu trokuta ");
	scanf("%f",&y);
	
	c=potencija(potencija(x,2)+potencija(y,2),0.5);
	printf("%f",c);
	
	return 0;
}

float potencija (float a, float b){
	return pow(a,b);
}
