#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,br,jed,des,stot,suma;
	
	for(i=0;i<3;i++){
		printf("Unesi %d broj ", i+1);
		scanf("%d",&br);
		jed=br%10;
		des=(br/10)%10;
		stot=br/100;
		suma=jed+des+stot;
		if(suma>8){
			printf("Broj %d ima zbroj zn veæi od 8",br);
		}
	}
	return 0;
}
