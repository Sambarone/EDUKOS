#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float korjen;
	int i;
	for(i=1;i<=20;i++){
	if(i%2!=0){
	korjen=pow(i,0.5);
	printf("%.2f\n",korjen);	
	}
	}
	
	return 0;
}
