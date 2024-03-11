#include <stdio.h>
#include <stdlib.h>

void main()
{
	int counter,result;
	counter=1;
	result=0;
	while (counter<=12){
		result+=6;
		printf("\n %d x 6 = %d", counter, result);
		counter++;
	}
	printf("\n\n\n");
}
