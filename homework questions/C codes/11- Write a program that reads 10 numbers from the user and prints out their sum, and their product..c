#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,sum,product;
	int counter;
	counter=1;
	sum=0;
	product=1;
	while(counter<=10){
		scanf("%f",&a);
		sum+=a;
		product*=a;
		counter++;
	}
	printf("\nsum of numbers: %f", sum);
	printf("\nproduct of numbers: %f", product);
	
}
