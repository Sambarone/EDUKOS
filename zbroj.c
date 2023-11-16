#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const char a='a';
	printf ("%d\n", a);
	
	int i;
	for (i=65;i<127;i++){
	
	printf ("%c\t %c\t %c\n", i, i+1, i+2);
	i+=2;
	}
	
	
	return 0;
}
