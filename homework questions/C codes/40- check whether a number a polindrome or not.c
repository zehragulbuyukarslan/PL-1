#include <stdio.h>

int main(void)
{
	int n, nn, r;
	printf("\n enter a number: ");
	scanf("%d",&n);
	nn=n;
	for(r=0; n>0; n/=10){
		r=r*10+n%10;
	}
	if(r==nn)
	printf("\n %d is a polindrome! ", nn);
	else 
	printf("\n %d is NOT a polindrome! ", nn);
	
}
