#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Enter the number of logic circuit inputs: ");
	int enterance, combination;
	scanf("%d",&enterance);
	combination=pow(2,enterance);
	
	
	int a[combination][enterance];
	int i,j;
	int column=0;
	int counter=0;
	int file=0;
	
	
	for (j=(enterance-1);j>-1;j--){
		file++;
		column=pow(2,file);		
	for (i=0;i<combination;i++){
	if(counter%column>=column/2)
	a[i][j]=1;
	else 
	a[i][j]=0;
		counter++;
		}
		}
	
	
	for (i=0;i<combination;i++){
		for (j=0;j<enterance;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
