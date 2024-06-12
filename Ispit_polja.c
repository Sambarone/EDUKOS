#include <stdio.h>
#include <stdlib.h>

/* 

4.	Napisati rekurzivnu funkciju za program koji æe naæi n èlan fibonacci niza 
ako znamo da se n-ti èlan dobija tako da se zbroje n-1 i n-2 èlanovi niza.
f(0)	f(1)	f(2)	f(3)
0 	1	1	2	3	5	8	13	21	34
pomoæu rekurzije

5.	Napisati rekurzivnu funkciju za program koji æe 
izraèunavati umnožak prvih n brojeva.
*/
int umnozak (int n);
int fib(int n);
int main(int argc, char *argv[]) {
	
	int n;
	printf("Unesi broj: ");
	scanf("%d", &n);
	int a=umnozak(n);
	printf("Suma prvih n brojeva je %d\n", a);
	int b=fib(n);
	printf("%d clan fibonacci niza je  %d",n, b);
	return 0;
}

int umnozak(int n){
	if(n==1){
		return 1;
	}
	else return umnozak(n-1)*n;
}

int fib(int n){
	if (n==1){
	return 1;
	}
	else if(n==0){
	return 0;
	}
	else {
	return fib(n-1)+fib(n-2);
	}
	 
	
}
