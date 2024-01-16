#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int br1,br2, p1,p2,i;
	printf("Unesi broj prve èaše");
	scanf("%d",&br1);
	printf("Unesi druge prve èaše");
	scanf("%d",&br2);
	for (i=0;i<5;i++){
		printf("Unesi %d broj prve èaše", i+1);
		scanf("%d",&p1);
		printf("Unesi %d broj prve èaše", i+1);
		scanf("%d",&p2);
		if(p1==br1){
			br1=p2;
		}
		else if(p2==br1)
		{br1=p1;
		}
		if(p1==br2)
		{br2=p2;
		}
		else if(p2==br2){
			br2=p1;
		}
		
	}
	printf("Broj prve èaše je %d \n",br1);
	printf("Broj druge èaše je %d \n",br2);
	
	
	return 0;
}
