#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
/*	printf("Unesi broj za koji želiš izraèunati fakorjel. ");
	scanf("%d",&a);
	int b=faktorjel(a);
	printf("%d",b);
	int c;
	printf("Unesi broj za koji želiš izraèunati zbroj znamenaka. ");
	scanf("%d",&c);
	int d=zbroj(c);
	printf("%d",d);
	*/
	int e;
	printf("Unesi redni broj èlana fibinaccijevog niza. ");
	scanf("%d",&e);
	int f=fib(e);
	printf("%d",f);
	
	
	
	return 0;
}

int faktorjel(int n){
	if(n==1)
	return 1;
	
	else 
	return n*faktorjel(n-1);
		
	
}

int zbroj(int n){
	if(n<1)
	return n;
	
	else 
	return n%10+zbroj(n/10);
		
	
}
int fib(int n){
	if(n<2)
	return 1;
	
	else 
	return fib(n-1)+fib(n-2);
		
}

