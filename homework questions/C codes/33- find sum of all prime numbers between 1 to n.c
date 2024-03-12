#include <stdio.h>

int main(void)
{
	int n,p,i,sum;
	sum=0;
	printf("\n enter the limit: ");
	scanf("%d",&n);

    for(p=2; p<=n; p++){
    	for(i=2; i<p; i++){
    		if(p%i==0)
    		i=p+2;
		}
		if(i!=p+3)
		sum+=p;
	}
	printf("\n sum of all prime numbers between 1 to %d is: %d",n,sum);
}
