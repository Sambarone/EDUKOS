#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int brojnik, nazivnik;
	
	printf("Unesi brojnik ");
	scanf("%d",&brojnik);
	printf("Unesi nazivnik ");
	scanf("%d",&nazivnik);
	
	skrati(&brojnik,&nazivnik);
	printf("%d/%d",brojnik, nazivnik);
	
	return 0;
}

int skrati(int *b, int *n){
	int min=*b;
	int j=2;
	if(min>*n)
	{
		min=*n;
	}
	while(min>j){
		if((*b%j==0) && (*n%j==0)){
			*b=*b/j;
			*n=*n/j;
			
		}
		else {
			j++;
		}
		
	}
	
}
