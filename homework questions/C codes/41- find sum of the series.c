#include <stdio.h>
#include <math.h>

int main(void)
{
	int x,l,i,n;
	float sum,powx,fact;
	printf(" sum of the series  1-X^2/2!+X^4/4!-.......");
	printf("\n enter the value of x: ");
	scanf("%d",&x);
	printf("\n enter the limit: ");
	scanf("%d",&l);
	if(l<0)
	printf("\n you entered wrong number! ");
	else{
		if(l<2)
		sum=1;
		else{
			sum=1;
			i=2;
			while(i<=l){
				powx=pow(x,i);
				fact=1;
				for(n=1; n<=i; n++)
				fact*=n;
				sum-=powx/fact;
				i+=2;
				    if(i<=l){
				    	fact=1;
				        for(n=1; n<=i; n++)
				        fact*=n;
				    	powx=pow(x,i);
				    	sum+=powx/fact;
				    	i+=2;
			}		
		}
	}
	printf("\n sum of the serie: %.3f",sum );
	}
}
