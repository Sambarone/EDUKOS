#include <stdio.h>
#include <stdlib.h>

/* U�itati zaklju�ne ocjene za 20 u�enika jednog razreda, 
nakon toga ispisati broj u�enika 
�ija je zaklju�na ocjena ve�a od prosjeka razreda.
Za rije�avanje ovog zadatka upotrijebite funkcije. 
 */
int i;
void unos(int a[]);
void ispis(int a[], float b);
float prosjek(int a[]);

int main(int argc, char *argv[]) {
	//deklaracija polja
	int a[7];
	
	//poziv funkcije za unos elemenata u polje
	unos(a);
	//poziv funckije za izra�uvanje prosjeka
	printf("%f prosjek ",prosjek(a));
	
	
	//poziv funkcije za ispis
	ispis(a,prosjek(a));
	
	return 0;
}

void unos(int a[]){
	for(i=0;i<7;i++){
		printf("Unesi %d �lan polja: ", i+1);
		scanf("%d", &a[i]);
	}
	
}


void ispis(int a[], float b){
	for(i=0;i<7;i++){
		if(a[i]>b){
		printf(" %d \t", a[i]);
				}
	}
	
}

float prosjek(int a[]){
	int suma=0;
	for(i=0;i<7;i++){
		suma=suma+a[i];
		}
	return (float)suma/7;
	}
