#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i;
void pretvori(int a[10],int n);
int main(int argc, char *argv[]) {
	int d,a[10], j;
	printf("Unesi neki broj");
	scanf("%d", &d);
	pretvori(a,d);
	
	for(j=i-1;j>=0;j--)
	{
		printf("%d", a[j]);
	}
	
	return 0;
}

void pretvori(int a[10], int n){
	i=0;
	while(n>0){
	a[i]=n%8;
	n=n/8;
	i++;	
	}
}
