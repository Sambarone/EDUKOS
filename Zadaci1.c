#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float trajanje;   

    float cijena;     

    int kuna, lipa;    

 

    printf("Unesi trajanje razgovora u minutama: "); 

    scanf("%f", &trajanje); 

 

     

    cijena = 0.45 + (trajanje * 60 * 0.05);   

 

     

    kuna = (int)cijena;       

    lipa = (int)((cijena - kuna) * 100);  

 

    printf("Ivica je potrošio %d kuna i %d lipa.\n", kuna, lipa); 
	return 0;
}
