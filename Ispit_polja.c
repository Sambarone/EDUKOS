#include <stdio.h>
#include <stdlib.h>

/* raèunanje faktorjela i fibonacci niza pomoæu rekurzije*/
int umnozak (int n);
int fib(int n);
int main(int argc, char *argv[]) {
	
	int n;
	printf("Unesi broj: ");
	scanf("%d", &n);
	int b=fib(n);
	printf("%d", b);
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
