#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,br,suma,br_p;
	br_p=0;
	suma=suma;
	for(i=0;i<10;i++){
		printf("Unesi %d broj",i+1);
		scanf("%d",&br);
		if(br%2==0){
			suma=suma+br;
			br_p++;
		}	
	}
	printf("Parnih je %d a njihova suma je %d",br_p,suma);
	return 0;
}
