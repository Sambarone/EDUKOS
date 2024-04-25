#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, kugle, kune,uk_karata, vel, mal;
	/*printf("Koliko redova ima");
	scanf("%d",&t);
	kugle=zbroj(t);
	printf("Kugli ima %d\n", kugle);
	kune=nagrada(t);
	printf("Dobit æe novaca %d\n", kune);
	uk_karata=karte2(t);
	printf("Trebat æe ukupno karata %d\n", uk_karata);
	vel=velike(t);
	mal=male(t);
	printf("Stat æe ukupno karata %d\n", vel);
	printf("Stat æe ukupno karata %d\n", mal);*/
	
/*	int redovi, ukupno;
	
	printf("Koliko redova ima");
	scanf("%d",&redovi);
	ukupno=karte(redovi);
	printf("Karata ima %d", ukupno);
	
	*/
	int n;
	printf("Unesi neki broj");
	scanf("%d",&n);
	int djeljitelj=sqrt(n);
	if(prost(n,djeljitelj)==1) printf("Broj je prost");
	else printf("Broj nije prost");
	
	
	
	return 0;
	
	
}

int karte(int x){
	if(x==1)
	return 2;
	else return x*2+(x-1)+karte(x-1);
}

int prost(int x, int dj){
	if(dj==1)
	return 1;	//prost
	else if(x%dj==0)
	return 0;	//nije prost
	else return prost(x,dj-1);	// provjerava rekurzijom za djeljitelj -1 
							//dok ne doðe do 1 ili dok ne utvrdi da broj nije prost 
}







int zbroj(int x){
	if(x==1)
	return 1;
	else return x*x+zbroj(x-1);
}

int nagrada(int x){
	if(x==1)
	return 1;
	else return x+nagrada(x-1);

	}
	
	
	
	
	
	
	








int karte2(int x){
	if(x==1)
	return 3;
	else return (x*2)+(x-1)*2+x+karte2(x-1);
}

int velike(int x){
	if(x==1){
		return 13;
	}
	else 
 	return velike(x-1)+13*x;
}

int male(int x){
	if(x==1){
		return 23;
	}
	else 
 	return male(x-1)+23*x;
}
