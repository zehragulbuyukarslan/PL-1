#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	a=1000;
	b=0;
	printf("\n");
	while(a<=2000){
		b+=a;
		printf("%d\t",a);
		a+=2;
	}
	printf("\n\n total sum of the numbers: %d", b);
	printf("\n\n\n");
	
}

