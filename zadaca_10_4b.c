#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int zbroj=0;
	int i;
	for(i=5;i<=50;i++)
	{
		if(i%3==0 || i%5==0){
			zbroj++;
		}
	}
	printf("%d brojeva je djeljivo s 3 ili s 5",zbroj);
	return 0;
}
