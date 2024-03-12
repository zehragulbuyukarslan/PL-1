#include <stdio.h>

int main(void)   // print all perfect numbers between 1 to n //
{
	int n, i, ii, sum;
	printf("\n enter the limit: ");
	scanf("%d",&n);
	printf("\n perfect numbers: ");
	for(i=6; i<=n; i++){
		sum=1;
		for(ii=2; ii<i; ii++){
			if(i%ii==0)
			sum+=ii;
		}
		if(sum==i)
		printf("\n %d ",i);
		
	}
}
