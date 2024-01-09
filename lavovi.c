#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int l,m,d,x;
	printf("Unesi broj lavova: ");
	scanf("%d",&l);
	printf("Unesi kg mesa ");
	scanf("%d",&m);
	d=m/(l*5);
	printf("Lavovi imaju hrane za %d dana\n",d);
	x=(m%(l*5))/5;
	printf("Zadnjeg dana uspije se najesti %d lavova ",x);
	return 0;
}
