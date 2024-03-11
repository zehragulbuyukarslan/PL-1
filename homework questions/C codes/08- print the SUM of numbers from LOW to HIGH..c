#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,c,sum;
	printf("enter a number:\n");
	scanf("%d",&a);
	printf("enter another number:\n");
	scanf("%d",&b);
	sum=0;
	if(a<=b){
		c=a;
	    while(c<=b){
	    	sum=sum+c;
	    	c++;
		}
	    printf("sum of the numbers between you entered: %d", sum);
	}
	else {
		c=b;
		while(c<=a){
			sum=sum+c;
			c++;
		}
		printf("sum of the numbers between you entered: %d",sum);
	}
	
}
