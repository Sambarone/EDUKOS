#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int br;
	bool par=false;
	bool tro=false;
	bool poz=false;
	int brp=0;
	while((par==false || tro==false || poz==false) && brp<3)
	{
		printf("Unesi neki broj");
		scanf("%d",&br);
		if(br%2==0){
			par=true;
		}
		if(br>0){
			poz=true;
		}
		if(br>99 && br<1000) {
			tro=true;
		}
		brp++;
	}
	printf("Bingo");
	return 0;
}
