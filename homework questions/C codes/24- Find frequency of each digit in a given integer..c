#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int n,f,i;
	printf("\nenter a number:");
	scanf("%d",&n);
	printf("\nenter the digit that you want to find its frequency:");
	scanf("%d", &f);
	i=0;
	while(n>0){
	    if(n%10==f) 
		       i++;
		n/=10;
	}
	printf("\nfrequency of %d is: %d", f,i);
}
