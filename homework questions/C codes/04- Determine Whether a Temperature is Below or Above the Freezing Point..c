#include <stdio.h>
#include <stdlib.h>

int main()
{
	float N;
	
	printf("\nenter the temperature degree in celcius:\n");
	scanf("%f", &N);
	
	if(N==0)     	printf("the temperature is at the freezing point.\n\n\n");
	else if(N<0) 	printf("the temperature is below the freezing point.\n\n\n");
	else         	printf("the temperature is above the freezing point.");
	
	return 0;
}
