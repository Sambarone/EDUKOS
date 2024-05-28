#include <stdio.h>
#include <stdlib.h>

/* Uèitati zakljuène ocjene za 20 uèenika jednog razreda, 
nakon toga ispisati broj uèenika 
èija je zakljuèna ocjena veæa od prosjeka razreda.
Za riješavanje ovog zadatka upotrijebite funkcije. 
 */
void unos(int a[]);
float prosjek(int a[]);
void ispis(int a,float prosjek);

int main(int argc, char *argv[]) {
	//deklaracija polja
	int a[5];
	
	unos(a);
	prosjek(a);
	ispis(a,prosjek);
	
	return 0;
}

void unos(int a[]){
	
	
}
float prosjek(int a[]){
	
	return suma/5;
}
void ispis(int a,float prosjek){
	
}
