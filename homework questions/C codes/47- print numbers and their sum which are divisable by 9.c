#include <stdio.h>

// print numbers and their sum wich are divisable by 9 between 100 and 200 //
int main(void)
{
	int i,sum;
	sum=0;
	i=108;
	while(i<=198){
		sum+=i;
		printf(" %d ",i);
		i+=9;
	}
	printf("\n sum of them: %d",sum);
}
