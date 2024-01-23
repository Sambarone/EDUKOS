int kod(){
	int n,max,i;
	i=0;
	printf("Unesi neki broj ");
	scanf("%d",&n);
	max=1;
	while(n>0)
	{
	if(n%10>max){
		max=n%10;
	}
	i++;
	n=n/10;
	}
	
	printf("Kod je %d ",max-i);

	
	return 0;
}
