#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=32;
	int d=bin(i,0);
	printf("%d", d);
	return 0;
}

int dec(int x, int y){
	int z=x%10;
	int w=x/10;
	if(x<2)
	return x*pow(2,y);
	else 
	return z*pow(2,y)+ dec(w,y+1);
}
		


int bin(int x, int y){
	if (x<1){
		return x%2*pow(10,y);
	}
	else return x%2*pow(10,y)+bin(x/2,y+1);
}

/*
int main(){
	int a;
	printf("Unesi dek broj: ");
	scanf("%d",&a);
	
	printf("%d",dec_bin(a));
}
int dec_bin(int x){
	if(x==0)
		return 0;
	else
		return x%2+10*dec_bin(x/2);
}

*/
