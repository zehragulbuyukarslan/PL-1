#include <stdio.h>

// convert a decimal number into binary //
int main(void)
{
	int d,b,s,i;
	printf("\n enter a decimal number:");
	scanf("%d",&d);
	b=0;
	s=1;
	
	for(i=d; i>0; i/=2){
		b=b+i%2*s;
		s*=10;  
    }
	
	printf("\n binary version of %d is: %d",d,b);
}
