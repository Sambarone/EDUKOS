#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Program tra�i da u polje unesemo 5 cijelih brojeva. 
Nakon toga program ispisuje koji je 
broj najbli�i aritmeti�koj sredini upisanih brojeva. */

int main(int argc, char *argv[]) {
	int i;
	int a[5]={-7,110,4,50,8};
	int najblizi=a[0];
	int suma=0;
	
	for(i=0;i<5;i++){
		suma=suma+a[i];
	}
	float as=(float)suma/5;
	printf("As je %f\n", as);
	
	
//	printf("udaljenost je %f", fabs(najblizi-as));
	
	int j;
	for(j=1;j<5;j++){
	if(fabs(a[j]-as)<fabs(najblizi-as))	
	{
		najblizi=a[j];
	}
	}
	printf("najblizi je %d", najblizi);
	
	
	return 0;
}
