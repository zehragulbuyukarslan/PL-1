#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int r;
	float area;
	printf("\nenter the radius of the circle: \n");
	scanf("%d",&r);
	area=(3.14)*r*r;
	printf("area of the circle: %.5f", area);
	printf("\n\n\n");
	
	return 0;
}
