#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,i,HCF;
	
	printf("\nenter first value:");
	scanf("%d", &a);
	
	printf("\nenter second value:");
	scanf("%d", &b);
	
	i=1;
	while(i<=a){
		if((a%i==0)&&(b%i==0))
		    HCF=i;
	    i++;
	}
	printf("\nthe highest common factor of two numbers: %d",HCF);
}
