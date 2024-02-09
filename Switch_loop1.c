#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	do{
		printf("Odaberi dan u tjednu : \n");
		printf("0 za nedjelju : \n");
		printf("1 za ponedljak : \n");
		printf("2 za utorak : \n");
		printf("3 za srijedu : \n");
		printf("4 za èetvrtak : \n");
		printf("5 za petak : \n");
		printf("6 za subota : \n");
		printf("7 za izlaz iz programa : \n");
		scanf("%d",&n);
		switch (n){
			case 0:
			printf("Nedjelja : \n");
			break;
			case 1:
			printf("Ponedjeljak : \n");
			break;
			case 2:
			printf("Utorak : \n");
			break;
			case 3:
			printf("Sri : \n");
			break;
			case 4:
			printf("Èetvrtak: \n");
			break;
			case 5:
			printf("Petak : \n");
			break;
			case 6:
			printf("Subota : \n");
			break;
			case 7:
			printf("Izlazim : \n");
			break;
			default:
				printf("Invalid choice. Please enter a valid option.\n");
				
		}
		
	} while(n!=7);
	
	return 0;
}
