#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 1;
	int y = 2;
	int z = 3;
	if (x > y || z > y) {
 		if (x > z)
			 x += 1;
			}
	else if (z > y && z > x)
 			y += 1;
	else
		 z += 1;
		printf("%d %d %d", x, y, z);
	
	
	return 0;
}
