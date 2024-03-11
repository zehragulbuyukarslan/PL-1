#include <stdio.h>
#include <stdlib.h>

void main()
{
	int low,high,step;
	
	printf("\nenter the low value:");
	scanf("%d", &low);
	
	printf("\nenter the high value:");
	scanf("%d", &high);
	
	printf("\nenter the step value:");
	scanf("%d", &step);
	printf("\n");
	
	while(low<=high){
		printf("%d \t", low);
		low+=step;
	}
}
