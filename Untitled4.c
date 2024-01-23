int csi(){
	int n;
	int suma=0;
	printf("Unesi neki broj ");
	scanf("%d",&n);
	
		
	
	while(n>0)
	{
	
	suma=suma+n%10;
	n=n/10;
	}
	printf("suma %d", suma);
	if(suma<20){
		printf("mala");
	}
	else if(suma<50)
	{
		printf("potpuna");
	}
	else
	{
		printf("velika");
	}
	
	return 0;
}
