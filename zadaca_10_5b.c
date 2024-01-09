#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,br,jed,des,stot;
	float suma=0;
	float as;
	for(i=0;i<2;i++)
	{
		printf("Unesi broj \n");
		scanf("%d",&br);
		if(br>99 && br<1000){
		
		jed=br%10;
		des=(br/10)%10;
		stot=br/100;
		suma=jed+des+stot;
		as=suma/3;
			printf(" As znameniki je %f  \n",as);
		
	}
	else{
		printf("Nisi unio troznamenkasti broj ");
	}
	}
	return 0;
}
