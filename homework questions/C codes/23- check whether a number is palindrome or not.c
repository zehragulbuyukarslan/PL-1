#include <stdio.h>

void main()
{
	int n,reverse,N;
	printf("\n enter a number:");
	scanf("%d", &n);
	N=n;
	reverse=0;
	while(n>0){
		reverse=(reverse*10)+(n%10);
		n/=10;
	}
	
	if(reverse==N)
	printf("\n %d is polindrome!", N);
	
	else
	printf("\n %d is NOT polindrome!", N);
}
