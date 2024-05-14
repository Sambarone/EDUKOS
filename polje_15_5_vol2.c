#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Uèitati n brojeva u polje. Ispisati parne brojeve veæe od 
//najmanjeg neparnog broja.

int main(int argc, char *argv[]) {
	int n,i, suma, min;
	printf("Unesi broj èlanova polja ");
	scanf("%d",&n);
	int a[n];
	bool prvi=true;
	
	for(i=0;i<n;i++){
		printf("Unesi %d. èlan polja ", i+1);
		scanf("%d",&a[i]);
		if(a[i]%2!=0 && prvi==true)
		{
		min=a[i];
		prvi=false;
		printf("Ušao sam\n");
		}
		if(a[i]%2!=0 && min>a[i]){
			min=a[i];
			printf("Provjera\n");
		}
	}
	
	printf("Najmanji neparni broj je %d\n", min);	
	

	for(i=0;i<n;i++){
	if(a[i]%2==0 && a[i]>min)
	printf("%d\n",a[i]);	
	}

	
	
	return 0;
}
