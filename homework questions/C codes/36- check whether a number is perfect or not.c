#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,sum;
	printf("\n enter a number: ");
	scanf("%d",&n);
	sum=1;
	for(i=2; i<n; i++){
		if(n%i==0)
		sum+=i;
	}
	if(sum==n)
	printf("\n %d is a perfect number!\n\n",n);
	else 
	printf("\n %d is NOT a perfect number!*\n\n",n);
}
