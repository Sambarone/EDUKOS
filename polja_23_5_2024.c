#include <stdio.h>
#include <stdlib.h>

/* U�itati n brojeva u polje. 
Ispisati parne brojeve ve�e od najmanjeg neparnog broja.*/


int main(int argc, char *argv[]) {
	
	//unos duljine polja
	int n;
	printf("Koliku duljinu polja �eli�: ");
	scanf("%d", &n);
	int a[n];
	//unos �lanova polja i provjera jesmo li unijeli neparni broj u polje
	int i,nep=0,j, ind, min;
	for(i=0;i<n;i++){
	printf("Unesi %d: �lan polja ", i+1);
	scanf("%d", &a[i]);	
	if(a[i]%2!=0){
		min=a[i];
		ind=i;
		nep++;
	}	
	}
	//provjera ima li neparnih brojeva u polju i tra�enje najmanjeg nepranog
	if(nep<0){
		printf("Nema� neparnih brojeva u polju ");
	}
	else 
	for(j=0;j<ind;j++){
		if(a[j]<min && a[i]%2!=0){
			min=a[j];
		}
	}
	//ispis najmanjeg neparnog broja
	printf("Najmanji neparni broj je %d ", min);
	
	//ispis parnih brojeva ve�ih od najmanjeg neparnog broja
	for(i=0;i<n;i++){
	if(a[i]%2==0 && a[i]>min){
	printf("Parni broj ve�i od mina je %d", a[i]);
	}	
	}
	
	
	return 0;
}
