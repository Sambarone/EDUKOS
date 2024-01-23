int mika(){
	int n,suma,i;
	i=0;
	printf("Unesi neki broj ");
	scanf("%d",&n);
	
	while(n>0)
	{
	if(n%10==4){
		i++;
	}	
	n=n/10;
	}
	
	printf("Broj 4 se pojavljuje %d ",i);

	
	return 0;
}
