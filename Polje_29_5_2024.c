#include <stdio.h>
#include <stdlib.h>

/* Program traži uèitavanje prirodnog broja n, 
i nakon toga n elemenata u jedan niz. 
Program treba na zaslonu ispisati koliko od uèitanih brojeva ima 
zbroj znamenaka veæi od 5. 

 */
int i;
void unos(int a[],int b);
void ispis(int a[], int b);
int zbroj(int a);

int main(int argc, char *argv[]) {
	//unos dužine polja
	int n;
	printf("Unesi dužinu polja: ");
	scanf("%d", &n);
	
	//deklaracija polja
	int a[n];
	
	//poziv funkcije za unos elemenata u polje
	unos(a,n);
	
	
	//poziv funkcije za ispis
	ispis(a,n);
	
	return 0;
}

void unos(int a[], int b){
	for(i=0;i<b;i++){
		printf("Unesi %d èlan polja: ", i+1);
		scanf("%d", &a[i]);
	}
	
}


void ispis(int a[], int b){
	for(i=0;i<b;i++){
		if(zbroj(a[i])>5){
		printf(" %d \t", a[i]);
	}
	}
	}

int zbroj(int a){
	int suma=0;
	while(a>0){
		suma=suma+a%10;
		a=a/10;
	}
		
	return suma;
	}
