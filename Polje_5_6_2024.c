#include <stdio.h>
#include <stdlib.h>

/* Program unosi n �lanova u polje. 
Nakon toga program pronalazi najve�u sumu uastopnih �lanova podniza
od zadanog niza.  

 */
int i,j, max;
void unos(int a[],int b);
void ispis(int a[], int b);
void zbroj(int a[],int n);

int main(int argc, char *argv[]) {
	//unos du�ine polja
	int n;
	printf("Unesi du�inu polja: ");
	scanf("%d", &n);
	
	//deklaracija polja
	int a[n];
	
	//poziv funkcije za unos elemenata u polje
	unos(a,n);
	
	
	 zbroj(a,n);
	
	
	return 0;
}

void unos(int a[], int b){
	for(i=0;i<b;i++){
		printf("Unesi %d �lan polja: ", i+1);
		scanf("%d", &a[i]);
	}
	
}



void zbroj(int a[], int n){
	max=a[0]+a[1];
	for(i=0;i<n;i++){
		int suma=0;
			for(j=0;j<=i;j++){
			suma=suma+a[j];
			
		}
		if(suma>max){
			max=suma;
		}
		
	}
	printf("Najve�a suma je %d\n",max);
	
	}
