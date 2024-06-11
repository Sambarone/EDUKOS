#include <stdio.h>
#include <stdlib.h>

/* 
Sortiranje polja zamjenom elemenata
*/

int i,j, suma, k,tmp;
void unos (int a[],int b);
void ispis (int a[],int b);
void sortiranje(int a[], int b);

 
 
int main(int argc, char *argv[]) {
	//unos broja �lanova polja
	int n;
	printf("Unesi broj �lanova polja: ");
	scanf("%d", &n);
	//deklaracija polja du�ine n
	int a[n];
	//unos �lanova polja
	unos(a,n);
	//sortiranje
	sortiranje(a,n);
	//ispis
	ispis(a,n);
	return 0;
}

void unos (int a[],int b){
	for(i=0;i<b;i++){
	printf("Unesi %d. �lan polja: ", i+1);
	scanf("%d", &a[i]);
	}
}

void ispis (int a[],int b){
	for(i=0;i<b;i++){
	printf(" %d \t", a[i]);
	
	}
}

void sortiranje(int a[], int b){
	for(i=0;i<b-1;i++){
	for(j=i+1;j<b;j++){
		if(a[i]>a[j]){
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			
		}
	}	
	}
}



