#include <stdio.h>
#include <stdlib.h>

/*U�itati n brojeva u polje. Ispisati parne 
brojeve ve�e od najmanjeg neparnog broja.
*/
int main(int argc, char *argv[]) {
	//unos duljine polja
	int n,i, ind, najmanji;
	int nep=0;
	printf("Unesi duljinu polja: ");
	scanf("%d", &n);
	//deklaracija polja
	int a[n];
	//unos elemenata u polje
	for(i=0;i<n;i++){
		printf("Unesi %d element u polje: ", i+1 );
		scanf("%d", &a[i]);
		if(a[i]%2!=0){
			nep++;
			najmanji=a[i];
			ind=i;
		}	
	}
	if(nep<1){
		printf("Nisi unio neparni element u polje: ");
	}
	else {
	
	//tra�enje najmanjeg neparnog broja
	for(i=0;i<ind;i++){
		if(a[i]%2!=0 && a[i]<najmanji){
				najmanji=a[i];
			
		}	
	}
		
	printf("Unio si %d neparnih elemenata \n ", nep );
	printf("Najmanji neparnih broj je %d \n", najmanji );
	//ispis parnih elemenata ve�ih od najmanjeg
		for(i=0;i<n;i++){
		if(a[i]%2==0 &&a[i]>najmanji){
			printf("Parni element ve�i od najmanjeg je %d\n", a[i] );
				}	
			}
		}	
	
	
	return 0;
}
