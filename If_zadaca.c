#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  int a;
	  printf("Unesi neki broj: ");
	  scanf("%d",&a);
	  
	  if(a==0) {
	  	printf("Broj nije prirodan\n"); 
	  }
	  		
	  else if (a%2==0) {
	  	printf("Broj je paran\n");
	  	  	  }
	 	else {
	 			printf("Broj nije paran\n"); 
		 }
	 
	return 0;
}
