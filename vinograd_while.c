#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i, suma;
	suma=0;
	char b='C';
	char a;
	printf("Unesi s broj èokota");
	scanf("%d",&n);

	printf("Unesi %d oznaku èokota",i);
	scanf("%s",&a);
	i=n/10;
	printf("Unio si %d",i);
	
	/*while(n>0){
		printf("Unesi %d oznaku èokota",i);
		scanf("%c",&a);
		if(a==b){
			suma=suma+n%10;
		}
		i++;
		n=n/10;
		printf("Suma %d je:\n",suma);
	}
	*/
	return 0;
}
