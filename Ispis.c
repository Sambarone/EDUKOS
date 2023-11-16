#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=5;
	float b=5.00;
	char znak='z';
	char niz[]="Ivan";
	printf("Varijabla a ima vrijednost %d\n",a); //ispis cjelog broja
	printf("Varijabla b ima vrijednost %f\n",b); //ispis realnog broja
	printf("Varijabla znak ima vrijednost %c\n",znak); //ispis znaka
	printf("Varijabla niz ima vrijednost %s\n",niz); //ispis niza znakova  
	
	int godine=35;
	char ime[]="Ivan";
	char prezime[]="Sambol";
	float prosjek=4.55;
	
	printf("Moje ime je %s %s i imam %d godina! ", ime, prezime,godine);
	printf("8. razred sam prošao s %f prosjekom. ", prosjek);
	
	return 0;
}
