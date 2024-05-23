#include <stdio.h>
#include <stdlib.h>

/* Uèitati n brojeva u polje. 
Ispisati parne brojeve veæe od najmanjeg neparnog broja.*/


int main(int argc, char *argv[]) {
	
	//unos duljine polja
	int n;
	printf("Koliku duljinu polja želiš: ");
	scanf("%d", &n);
	int a[n];
	//unos èlanova polja i provjera jesmo li unijeli neparni broj u polje
	int i,nep=0,j, ind, min;
	for(i=0;i<n;i++){
	printf("Unesi %d: èlan polja ", i+1);
	scanf("%d", &a[i]);	
	if(a[i]%2!=0){
		min=a[i];
		ind=i;
		nep++;
	}	
	}
	//provjera ima li neparnih brojeva u polju i traženje najmanjeg nepranog
	if(nep<0){
		printf("Nemaš neparnih brojeva u polju ");
	}
	else 
	for(j=0;j<ind;j++){
		if(a[j]<min && a[i]%2!=0){
			min=a[j];
		}
	}
	//ispis najmanjeg neparnog broja
	printf("Najmanji neparni broj je %d ", min);
	
	//ispis parnih brojeva veæih od najmanjeg neparnog broja
	for(i=0;i<n;i++){
	if(a[i]%2==0 && a[i]>min){
	printf("Parni broj veæi od mina je %d", a[i]);
	}	
	}
	
	
	return 0;
}
