#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int N,n,binary,s;
	printf("\n enter a number: ");
	scanf("%d", &n);
	// store the input value //
	N=n;
	binary=0;
	for(s=1; n>0; n/=2){
		binary=binary+(n%2)*s;
		s*=10;
	}
	
	printf("\n %d's binary format: %d \n\n\n", N, binary);
	
}
