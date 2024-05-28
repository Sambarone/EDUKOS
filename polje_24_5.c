#include <stdio.h>
#include <stdlib.h>

/* Uèitati zakljuène ocjene za 20 uèenika jednog razreda, 
nakon toga ispisati broj uèenika èija je zakljuèna ocjena veæa od prosjeka razreda.
Za riješavanje ovog zadatka upotrijebite funkcije. */

int i;
void unos(int a[]);
float prosjek(int a[]);
void ispis(int a[], float b);

int main(int argc, char *argv[]) {
	int a[5];
	unos(a);
	float c=prosjek(a);
	printf("Prosjek je %f\n", c);
	ispis(a, c);
	return 0;
}

void unos(int a[]){
	
	for(i=0;i<5;i++){
	printf("Unesi ocjenu %d uèenika", i+1);
	scanf("%d", &a[i]);	
	}
}


float prosjek (int a[])
{
	int suma=0;
	for(i=0;i<5;i++){
	suma=suma+a[i];
	
	}
	return (float)suma/5;
	
}

void ispis(int a[], float b){
	for(i=0;i<5;i++){
	if((float)a[i]>b){
		printf("Ocjena uèenika je %d\n ", a[i]);
	}
	
	
	
	}
}

