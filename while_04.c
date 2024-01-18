#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int i,j;
		for (i=1;i<=10;i++)
		{
			for (j=1;j<=10;j++){
				if(i==j){
					printf("%c\t",'X');
				}
				else {
						printf("%d\t",i*j);
				}
		
			}
			printf("\n");
		}
		
		return 0;
}
