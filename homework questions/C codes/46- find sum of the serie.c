#include <stdio.h>

// find the sum of the series 1 +11 + 111 + 1111 + .. n term //
int main(void)
{
	int n,t,i,sum;
	printf("\n enter the amount of term: ");
	scanf("%d",&n);
	t=0;
	for(i=1; i<=n; i++){
		t=t*10+1;
		sum+=t;
	}
	printf("sum of the series: %d",sum);
}
