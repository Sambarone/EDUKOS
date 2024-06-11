#include <stdio.h>
#include <stdlib.h>

/* 1.	Uèitati n brojeva u polje i ispisati 
sve brojeve u polju koji su veæi od aritmetièke sredine 
uèitanih parnih brojeva.

2.	Uèitati n brojeva u polje 
pronaæi najveæi i zamijeniti mu mjesto s brojem na 
prvom mjestu u polju (indeks 0). 
Ispisati polje nakon zamjene brojeva
*/
void unos(int a[],int n);
float prosjek(int a[], int n);
void ispis(int a[],int n,float b);
void ispis2(int a[],int n);
void max(int a[],int n);
void zamjena(int a[],int max, int ind);
int i,j,suma;
int main(int argc, char *argv[]) {
	int n=10;
	int a[n];
	unos(a,n);
	//ispis(a,n,prosjek(a,n));
	max(a,n);
	ispis2(a,n);
	
	return 0;
}

void unos(int a[], int n){
	for (i=0;i<n;i++){
		printf("Unesi %d broj", i+1);
		scanf("%d", &a[i]);

	}
	
}

float prosjek(int a[], int n){
	suma=0;
	for (i=0;i<n;i++){
		if(a[i]%2==0){
			suma=suma+a[i];
			j++;
		}

	}
	
	return (float)suma/j;
}

void ispis(int a[], int n, float b)
{
	printf("prosjek je %f\n",b);
	for (i=0;i<n;i++){
		if((float)a[i]>b){
			printf("%d\n",a[i]);
		}
}
}

void ispis2(int a[], int n)
{
	
	for (i=0;i<n;i++){
		
			printf("%d\n",a[i]);
		
}
}
void max(int a[],int n){
	int max=a[0];
	int ind=0;
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
			ind=i;
		}
	}
	zamjena(a,max,ind);
	
}

void zamjena (int a[], int max, int ind){
	int tmp;
	
	
	tmp=a[0];
	a[0]=max;
	a[ind]=tmp;
	
}
