#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int bin,dek,pom;
	dek=0;
	int kontrola=0;
	printf("Unesi neki binarni broj: ");
	scanf("%d",&bin);
	int i=0;
	while(bin>0 && kontrola==0){
		pom=bin%10;
		if(pom>1){
		kontrola++;	
		}
		dek=dek+pom*pow(2,i);
		i++;
		bin=bin/10;
		
	}
	if(kontrola>0){
		printf("Nisi unio binarni broj");
	}
	else{
		printf("Dekdaski broj je: %d ",dek);
	}
	
	return 0;
}
