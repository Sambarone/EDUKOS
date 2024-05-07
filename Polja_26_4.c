#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

int main(int argc, char *argv[]) {
	int n,i;
	printf("Koliko želiš èlanova niza ");
	scanf("%d",&n);
	//deklaracija niza
	int a[n];
	//unos elemenata niza
	for (i=0;i<n;i++){
		printf("Unesi %d èlan polja ",i+1);
		scanf("%d", &a[i]);
	}
	
	return 0;
}*/

int main(int argc, char *argv[]) {
	
 int n,i,min;
 printf("Unesi kolicinu brojeva:");
 scanf("%d", &n);

int a[n];
printf("Unesi prvi broj:"); 		
 	scanf("%d",&a[0]);
 	min=a[0];
 for(i=1;i<n;i++){
 	
 	printf("Unesi %d neki broj:", i); 		
 	scanf("%d",&a[i]);
 	
 	if(a[i] < min)
            min = a[i];
    }
    
    printf("Najmanji ucitani broj je : %d", min);
	
	return 0;
}

