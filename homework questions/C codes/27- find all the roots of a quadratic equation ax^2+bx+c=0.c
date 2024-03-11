#include <stdio.h>
#include <math.h>

void main()    //find all the roots of a quadratic equation ax^2+bx+c=0
{
	printf("\n equation ----> ax^2+bx+c=0\n\n");
	int a,b,c;   //declare  veriables of coefficient//
	float root1,root2;   //declare veriables of roots//
	printf("\n\n enter the first coefficient: ");  //prompt the user for input//
	scanf("%d",&a);    //read first input//
	printf("\n enter the second coefficient: ");   //prompt the user for input//
	scanf("%d",&b);    //read second input//
	printf("\n enter the third coefficient: ");   //prompt the user for input//
	scanf("%d",&c);    //read third input//
	root1= (-b-sqrt(b*b-4*a*c))/2*a;
	root2=(-b+sqrt(b*b-4*a*c))/2*a;
	printf("\n\n\n first root of %dx^2 + %dx + %d is: %.1f",a,b,c,root1);
	printf("\n\n second root of %dx^2 + %dx + %d is: %.1f\n\n\n",a,b,c,root2);
   	
}
