#include <stdio.h>
#include <stdlib.h>

/* 
Program traži uèitavanje prirodnog broja n, 
i nakon toga n elemenata u jedan niz. 
Program treba na zaslonu ispisati koliko od uèitanih brojeva ima 
zbroj znamenaka veæi od 5. 
*/

int i;
void unos (int a[],int b);

int main(int argc, char *argv[]) {
	//unos broja èlanova polja
	int n;
	printf("Unesi broj èlanova polja: ");
	scanf("%d", &n);
	//deklaracija polja dužine n
	int a[n];
	//unos èlanova polja
	unos(a,n);
		
	return 0;
}

void unos (int a[],int b){
	for(i=0;i<b;i++){
	printf("Unesi %d. èlan polja: ", i+1);
	scanf("%d", &a[b]);
	}
}

