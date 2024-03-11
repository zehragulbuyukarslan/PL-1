#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,counter,result;
	printf("\nenter a number:");
	counter=1;
	scanf("%d", &n);
	printf("\n\t MULTIPLICATION TALE\n");
	while(counter<=12){
		result=n*counter;
		printf("\n\t%d x %d = %d", n,counter,result);
		counter++;
	}
	printf("\n\n\n");
}
