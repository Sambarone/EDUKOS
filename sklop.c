#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("enter the number of logic circuit inputs: ");
	int ulaz, kombinacija;
	scanf("%d",&ulaz);
	kombinacija=pow(2,ulaz);
	
	
	int a[kombinacija][ulaz];
	int i,j;
	int stupac=0;
	int brojac=0;
	int stup=0;
	
	
	for (j=(ulaz-1);j>-1;j--){
		stup++;
		stupac=pow(2,stup);		
	for (i=0;i<kombinacija;i++){
	if(brojac%stupac>=stupac/2)
	a[i][j]=1;
	else 
	a[i][j]=0;
		brojac++;
		}
		}
	
	
	for (i=0;i<kombinacija;i++){
		for (j=0;j<ulaz;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
