#include <stdio.h>
#include <stdlib.h>

/* 3.	Uèitati 10 brojeva u a polje nakon toga kreirati polje b 
koje æe imati 5 èlanova koji æe se sastojati od umnoška èlanova prvog polja 
ali tako da b[0]=a[0]*a[9]; b[1]=a[1]*a[8] …. itd
*/
void unos(int a[], int n);
void zbroj(int a[],int b[],int n);
void ispis(int a,int n);
int i;
int main(int argc, char *argv[]) {
	int n=10;
	int a[n];
	
	int b[5];
	
	unos(a, n);
	zbroj(a,b,n);
	ispis(b,5);
	
	return 0;
}

void unos(int a[], int n){
	for (i=0;i<n;i++){
	printf("Unesi %d broj", i+1);
	scanf("%d",&a[i]);	
	}
	
	
}
void zbroj(int a[],int b[],int n){
	for (i=0;i<n/2;i++){
	b[i]=a[i]*a[n-1-i];
	}
}
ispis(int a[],int n){
	for (i=0;i<n;i++){
	printf("Novi broj%d\t ", a[i]);
		
	}
	
}
