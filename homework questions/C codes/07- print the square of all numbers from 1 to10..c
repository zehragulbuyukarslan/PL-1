#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, counter;
	counter=1;
	while(counter<=10){
		a=counter*counter;
		printf("\n the square of %d:  %d",counter, a);
		counter++;
	}
	
}
