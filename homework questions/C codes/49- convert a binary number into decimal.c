#include <stdio.h>
#include <math.h>

int main(void)
{
	int b,d,i;
	printf("\n enter a binary number: ");
	scanf("%d",&b);
	d=0;
	for(i=0; b>0; b/=10){
		if(b%10==1)
		d=d+pow(2,i);
		i++;
	}
	printf("\n decimal version of the number: %d \n\n\n",d);
}
