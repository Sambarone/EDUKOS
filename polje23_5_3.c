#include <stdio.h>
#include <stdlib.h>

/*Program tra�i u�itavanje prirodnog broja n (n<=150), 
nakon toga program unijeti niz od n brojeva. 
Nakon toga program treba prona�i najve�i zbroj uzastopnih 
�lanova podniza od zadanog niza. 
 */

int main(int argc, char *argv[]) {
	
	int n,i,j;
	printf("Unesi koliko �lanova polja �eli�: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("Unesi %d �lan polja : ", i+1);
		scanf("%d",&a[i]);
	}
	
	int suma=a[0];
	for(i=0;i<n;i++){
		int nova_suma=0;
		
		for(j=i;j<n;j++){
		nova_suma=nova_suma+a[j];
		if(nova_suma>suma){
			suma=nova_suma;
		}}
		
	}
	
	printf("Suma je  : %d ", suma);
	
	return 0;
}
