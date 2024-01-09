#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,br;
	float as,suma;
	suma=0;
	int n=0;
	
	for(i=0;i<10;i++){
	printf("Unesi %d br",i);
	scanf("%d",&br);
	if(br>10 && br%2==0){
	
	
	suma=suma+br;
	n++;}
	}
	as=suma/n;
	printf("As %f je",as);
	return 0;
}
