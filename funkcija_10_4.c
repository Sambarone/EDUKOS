#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float kvadrat(float x);
float korjen(float x);
float potencija(float x,float y);
int main(int argc, char *argv[]) {
	float a,b,c;
	printf("Unesi prvi stranicu: ");
	scanf("%f",&a);
	printf("Unesi drugu stranicu: ");
	scanf("%f",&b);

	c=potencija(potencija(a,2)+potencija(b,2),0.5);
	
	
	printf("%f",c);
	
	
	
	return 0;
}


float kvadrat(float x){
	return x*x;
}
float korjen(float x){
	return sqrt(x);
}

float potencija(float x,float y){
	return pow(x,y);
}


