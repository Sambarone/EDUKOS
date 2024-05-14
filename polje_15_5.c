#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Program traži da u polje unesemo 10 cijelih brojeva. 
//Nakon toga program ispisuje koji je broj najbliži aritmetièkoj 
//sredini upisanih brojeva. 

int main(int argc, char *argv[]) {
	
	int n,i, suma, najblizi;
	printf("Unesi broj èlanova polja ");
	scanf("%d",&n);
	int a[n];
	float as, udaljenost;
	suma=0;
	for(i=0;i<n;i++){
		printf("Unesi %d. èlan polja ", i+1);
		scanf("%d",&a[i]);
		suma=suma+a[i];
	}
	as=(float)suma/n;
	printf("As je %f\n", as);
	
	najblizi=0;
	udaljenost=fabs(as-(float)a[0]);
	printf("min prije petlje je %f\n", udaljenost);
	for(i=0;i<n;i++){
		if(fabs(as-(float)a[i])<udaljenost){
		
		
		najblizi=i;
		udaljenost=fabs(as-(float)a[i]);}
	}
	printf("min poslje petlje je %f\n", udaljenost);
	printf("Najbliži je %d", najblizi+1);
	return 0;
}
