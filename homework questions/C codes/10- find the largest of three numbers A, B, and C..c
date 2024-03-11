#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,c;
	
	printf("\nenter 1st number:");
	scanf("%d", &a);
	
	printf("\nenter 2nd number:");
	scanf("%d", &b);
	
	printf("\nenter 3rd number:");
	scanf("%d", &c);
	printf("\n");
	
	if(a>b&&a>c)    printf("%d is the greatest one.", a);
	
	else if(b>a&&b>c)    printf("%d is the greatest one.", b);
	
	else if(c>b&&c>a)    printf("%d is the greatest one.", c);
	
	else if(b==a&&a==c)  printf("all numbers are equal.");
	
	else if (b==a&&b>c)  printf("1st and 2nd numbers are greatest.");
	
	else if (b==c&&c>a)  printf("2nd and 3rd numbers are greatest.");
	
	else if(a==c&&c>b)   printf("1st and 3rd numbers are greatest.");
	
	printf("\n\n\n");
	
}
