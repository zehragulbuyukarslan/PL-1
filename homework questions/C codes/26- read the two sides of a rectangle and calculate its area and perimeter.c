#include <stdio.h>   //include  the standard input output header file.

void main()
{
	int a,b;   //declare variables for two sides of rectange.
	printf("\n enter the first side of rectangle: ");
	scanf("%d",&a);
	printf("\n enter the second side of rectangle: ");   //prompt the user for input.
	scanf("%d",&b);
	printf("\n\n area of the rectangle: %d", a*b);
	printf("\n perimeter of the rectangle: %d",(a+b)*2);
}
