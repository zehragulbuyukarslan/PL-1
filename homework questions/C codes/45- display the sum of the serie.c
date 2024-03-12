#include <stdio.h>
#include <math.h>

// find the sum of the series [ x - x^3 + x^5 + ......] //
int main(void)
{
	int x,l,i,n;
	float powx,sum;
	printf(" series:  (x - x^3 + x^5 + ..... )");
	printf("\n enter the x value: ");
	scanf("%d",&x);
	printf("\n enter the limit of the serie: ");
	scanf("%d",&l);
	if(x<0)
	printf("\n you entered wrong number! ");
	else{
		sum=0;
		for(i=1; i<=l; i+=2){
			powx=pow(x,i);
			if(i==3||i==4)
			sum-=powx;
			else
			sum+=powx;
		}
	printf("\n sum of the serie: %.2f \n\n\n\n\n",sum);
	}
		
}
