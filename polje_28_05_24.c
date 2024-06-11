#include <stdio.h>
#include <stdlib.h>

/* 
Program tra�i u�itavanje prirodnog broja n, 
i nakon toga n elemenata u jedan niz. 
Program treba na zaslonu ispisati koliko od u�itanih brojeva ima 
zbroj znamenaka ve�i od 5. 
*/

int i, suma, k;
void unos (int a[],int b);

int main(int argc, char *argv[]) {
	//unos broja �lanova polja
	int n;
	printf("Unesi broj �lanova polja: ");
	scanf("%d", &n);
	//deklaracija polja du�ine n
	int a[n];
	//unos �lanova polja
	unos(a,n);
	//ra�unanje zbroja znamenki

	printf("Broj �lanova �iji je zbroj ve�i od 5 je %d: ",zbroj(a,n,5));
	
		
	return 0;
}

void unos (int a[],int b){
	for(i=0;i<b;i++){
	printf("Unesi %d. �lan polja: ", i+1);
	scanf("%d", &a[i]);
	}
}
int zbroj(int a[],int b, int c){
	k=0;
	for(i=0;i<b;i++){
		suma=0;
		while(a[i]>0){
			suma=suma+a[i]%10;
			a[i]=a[i]/10;
			
		}
			
		if(suma>c){
			k++;
		}
		
	}
	return k;
	
}
