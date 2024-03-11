#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,N,digit;
	printf("\nenter a number:");
	scanf("%d", &n);
	N=n;
	digit=0;
	if(n<0) 
	n=n*(-1);
	while(n>0){
		digit++;
		n/=10;
	}
	printf("\n%d has %d digits.", N, digit);
}
