#include <stdio.h>
#include <stdlib.h>

void main()
{
	int counter,n,fact;
	printf("\nenter a number:");
	scanf("%d", &n);
	fact=1;
	counter=1;
	while(counter<=n){
		fact*=counter;
		counter++;
	}
	printf("\n%d's factoriel: %d\n\n\n", n, fact);
}
