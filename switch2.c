#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Unesi prvi broj: \n");
	scanf("%d",&a);
	printf("Unesi drugi broj: \n");
	scanf("%d",&b);
	
	float c;
	
	char n;
	

		printf("Odaberi raèunsku operaciju : \n");
		scanf("%s",&n);
		
		switch (n){
			case '+':
			printf("Zbroj brojeva %d i %d je %d \n",a,b,a+b);
			break;
			case '-':
				printf("Razlika brojeva %d i %d je %d \n",a,b,a-b);
			break;
			case '*':
			printf("Umnožak brojeva %d i %d je %d \n",a,b,a*b);
			break;
			case '//':
			c=(float)a/b;
				printf("Djeljenje brojeva %d i %d je %f \n",a,b,c);
			break;
			case '/':
			printf("Cjelobrojno djeljenje brojeva %d i %d je %d \n",a,b,a/b);
			break;
			case '%':
			printf("Ostatak djeljenja brojeva %d i %d je %d \n",a,b,a%b);
			default:
				printf("Invalid choice. Please enter a valid option.\n");
				
		}
		

	
	return 0;
}
