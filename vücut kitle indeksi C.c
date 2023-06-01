#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{
	
	float kilo;
	float boy;
	int vki;
	
	printf("Lutfen kilonuzu giriniz: ");
	scanf("%f", &kilo);
	
	printf("Lutfen boyunuzu giriniz: ");
	scanf("%f", &boy);
	
	vki = kilo / (boy * boy);
	printf("vucut kitle indeks oraniniz: %d\n", vki); 
	
	if(vki < 18)
	{
		printf("zayif");
	}
	else if(vki < 25)
	{
		printf("Normal");
	}
	else if(vki < 30)
	{
		printf("kilolu");
	}
	else if(vki < 35)
	{
		printf("1.derece obez");
	}
	else
	{
		printf("2.derece obez");
	}
	
	
	return 0;
	
}
