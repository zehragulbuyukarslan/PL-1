#include <stdio.h>

int main(void)         // display n terms of harmonic series 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n and its sum //
{
	int n;
	float sum,i;
	sum=1;
	printf(" enter the term amount: ");
	scanf("%d",&n);
	if(n<0)
	printf(" you entered wrong number!");
	else if(n==1)
	printf("\n\n\n HARMONIC SERIES: 1");
	else{
		printf("\n\n\n HARMONIC SERIES: 1");
	    for(i=2; i<=n; i++){
	    	printf(" + 1/%.0f",i);
	    	sum+=1/i;
	    }
	    printf(" = %.2f \n\n\n\n\n",sum);
	}
}
