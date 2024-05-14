#include <stdio.h>
#include <stdlib.h>

 /*
int main(int argc, char *argv[]) {
	int min,n,i, max;
	
	printf("Koliko želiš èlanova niza ");
	scanf("%d",&n);
	//deklaracija niza
	int a[n];
	printf("Unesi prvi  èlan niza ");
	scanf("%d", &a[0]);
	min=a[0];
	max=a[0];
	//unos elemenata niza
	for (i=1;i<n;i++){
		printf("Unesi %d èlan niza ",i+1);
		scanf("%d", &a[i]);
		if(a[i]<min){
			min=a[i];
		}
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Najmanji je %d\n", min);
	printf("Najveci je %d", max);
	
	
	return 0;
}

*/

int main(int argc, char *argv[]) {
	int n,j,i;
	
	printf("Koliko želiš èlanova niza ");
	scanf("%d",&n);
	//deklaracija niza
	int a[n];
	//unos elemenata niza
	for (i=0;i<n;i++){
		printf("Unesi %d èlan niza ",i+1);
		scanf("%d", &a[i]);
		}
	//ispis elemenata niza
	for (j=n-1;j>-1;j--){
			
		printf("%d. èlan niza je %d \n",j,a[j]);
		}
	
	return 0;
}


