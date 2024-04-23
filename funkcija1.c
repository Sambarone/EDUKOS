#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=10,y;
	y=2*proba(x);
	printf("\nx=%d\ny=%d",x,y);
	return 0;
}


int proba(x){
	x=x+2;
	return x;
}
