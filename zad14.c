int zad14()
{
	    int broj;  
    printf("Unesi jedan troznamenkasti broj: "); 
    scanf("%d", &broj); 
 
    int a = broj / 100; 
    int b= (broj / 10) % 10; 
    int c = broj % 10; 
 
    float d = (a + b + c) / 3.0; 
 
    printf("\nZnamenka stotica je: %d\n", a); 
    printf("Znamenka desetica je: %d\n", b); 
    printf("Znamenka jedinica je: %d\n", c); 
    printf("Aritmeticka sredina iznosi: %.2f\n", d); 

	return 0;
}
