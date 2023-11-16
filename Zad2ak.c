#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int zad(int argc, char *argv[]) {
		int a;
		int o;
		float p; 
		printf("Unesi stranicu trokuta: "); 
		scanf("%d",&a); 
		 
		o=3*a; 
		p=(sqrt(3)/4)*(a*a); 
 		printf("opseg je: %d \n Povrsina je: %f",o, p); 

	return 2;
}
