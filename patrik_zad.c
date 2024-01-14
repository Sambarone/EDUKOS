#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
	int i,a,b; 

 b=1; 

    printf("Upisi broj jedinica:\n"); 

    scanf("%d",&a); 

    for(i=1;i<a;i++){ 

     

    b=b+i*2; 

} 

    printf("Broj dana bez izlazka %d\n",b); 
	return 0;
}
