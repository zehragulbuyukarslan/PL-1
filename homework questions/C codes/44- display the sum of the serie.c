#include <stdio.h>
#include <math.h>

// display the sum of the series  (1 + x + x^2/2! + x^3/3! + ....) //
int main(void)        
{
	
	// declare veriables //
	int x,l,i,n;
	float sum,powx,fact;
	printf("\n enter the x value: ");
	scanf("%d",&x);
	printf("\n enter the limit of the series: ");
	scanf("%d",&l);
	if(l<0)
	printf("\n you entered wrong number! \n\n\n\n");
	else if(l==0){
		sum=1;
		printf("\n sum: %.1f",sum);
	}
	else{
		sum=1;
		for(i=1; i<=l; i++){
			powx=pow(x,i);
			fact=1;
			for(n=1; n<=i; n++)
			fact*=n;
			sum+=powx/fact;
		}
		printf("\n sum= %.2f",sum);
	}
}
