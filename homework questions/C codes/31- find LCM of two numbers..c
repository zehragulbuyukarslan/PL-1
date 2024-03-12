#include <stdio.h>

int main(void)
{
	int a,b,i;
	printf("\n enter the first number: ");
	scanf("%d",&a);
	printf("\n enter the second number: ");
	scanf("%d",&b);
	 //find HCM of the numbers//
	 for(i=b; i<=a*b; i++){
	 	if(i%a==0&&i%b==0){
		    printf("\n lowest common factor of %d and %d is: %d \n\n",a,b,i);
		    i=a*b;
	        }
	 }
}
