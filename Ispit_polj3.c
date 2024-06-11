#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
