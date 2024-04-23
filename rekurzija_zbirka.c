#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,najveci,z;
	a=27;
	najveci=sqrt(a);
	//printf("%d",najveci);
	z=prost(a,najveci);
	if(z==1)
	printf("Prost");
	else
	printf("Slozen");
	return 0;
}

int prost (int x,int y){
	if(y==1){
		return 1;
	}
	else if(x%y==0)
	{
		return 0;
	}
	else return prost(x,y-1);
	
}
