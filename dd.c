#include <stdio.h>
#include <stdlib.h>

/* U�itati zaklju�ne ocjene za 20 u�enika jednog razreda, 
nakon toga ispisati broj u�enika 
�ija je zaklju�na ocjena ve�a od prosjeka razreda.
Za rije�avanje ovog zadatka upotrijebite funkcije. 
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
