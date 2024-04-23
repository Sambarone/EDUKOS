#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
			int  a, i; 
		
		float art, nep, t; 
		
		i=1; 
		
		t=1; 
		nep=0;
		
		printf("Unesi neki broj:"); 
		
		scanf("%d", &a); 
		
		 
		
		while(a%4 != 0){ 
		
		printf("Unesi neki broj:"); 
		
		scanf("%d", &a); 
		
		i++; 
		
		 
		
		if(a%2 ==  1){ 
		
		nep=nep + a; 
		
		t++; 
		
		} 
		
		} 
		
		 
		
		art=nep/t; 
		
		printf("Uneseno je %d brojeva.", i); 
		
		printf("Aritmeticka sredina neparnih brojeva iznosi %f",art ); 
	
	
	return 0;
}
