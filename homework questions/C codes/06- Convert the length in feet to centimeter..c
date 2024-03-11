#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float feet,centimeter;
	printf("\nenter the length in feet:\n");
	scanf("%f", &feet);
	centimeter=feet*(30.48);
	printf("%f feet is equal %f centimeter.\n\n\n", feet,centimeter);
	
}
