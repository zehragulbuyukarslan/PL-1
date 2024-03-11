#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n;
	printf("enter a number:");
	scanf("%d", &n);
	printf("\n");
	while(n>=1){
		printf("%d,", n);
		n--;
	}
}
