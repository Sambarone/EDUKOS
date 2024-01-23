int mobitel(){
	int n,max,min,sred;
	n=0;
	printf("Unesi neki broj ");
	scanf("%d",&n);
	while(n<99){
	printf("Unesi neki broj ");
	scanf("%d",&n);	
	}
		max=n%10;
		min=n%10;
		sred=n%10;
	
	while(n>0)
	{
	
	if(n%10>max){
		max=n%10;
	}
	else if(n%10<min){
		min=n%10;
	}
	n=n/10;
	}
	int nbr=min*100+max+sred*10;
	printf("br je %d",nbr);

	
	return 0;
}
