#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,broj; 

 

    printf("Unesite 10 troznamenkastih brojeva:\n"); 

 

    for (i = 0; i < 10; i++) { 

        printf("Unesite %d. broj: ", i + 1); 

        scanf("%d", &broj); 

 

        if (broj >= 100 && broj <= 999) { 

            int znamenke = 0, sumaZnamenki = 0; 

            int temp = broj; 

 

            while (temp != 0) { 

                sumaZnamenki += temp % 10; 

                temp /= 10; 

                znamenke++; 

            } 

 

            if (znamenke > 0) { 

                float aritmetickaSredina = (float)sumaZnamenki / znamenke; 

                printf("Aritmeticka sredina znamenki broja %d: %.2f\n", broj, aritmetickaSredina); 

            } 

        } else { 

            printf("Uneseni broj nije troznamenkasti.\n"); 

        } 

    } 

 
		return 0; 


}
