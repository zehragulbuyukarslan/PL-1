#include <stdio.h>

void main()
{
	int n,N,first,last;
	printf("enter a number:");
	scanf("%d", &n);
	N=n;
	if(n<0)  
	n=n*(-1);
	last=n%10;
	while(n>9)
	n/=10;
	first=n;

	printf("\n first digit of %d number: %d \n last digit of %d number: %d \n", N, first, N, last);
}

