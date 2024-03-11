#include  <stdio.h>
#include <stdlib.h>

int main()
{
	float F,C;
	printf("enter the Fahrenheit degree:\n");
	scanf("%f", &F);
	C=(F-32)*5/9;
	printf("%f F° is equal %f C°", F,C);
	
	return 0;
}
