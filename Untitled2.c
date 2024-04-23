void razlomak(int *brojnik, int *nazivnik){
	int min=*brojnik;
	if(min>*nazivnik){
		min=*nazivnik;
	}
	int j=2;
	while(j<=min){
		if(*brojnik%j==0 && *nazivnik%j==0){
			*brojnik=*brojnik/j;
			*nazivnik=*nazivnik/j;
			min=min/j;
		}
		else{
			j++;
		}
		
		
	}
	printf("%d/%d  adrese\n ",brojnik, nazivnik );
	
}
