#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	//  S = ½ + ¼ + … +1/n  //
	
	int n;
	printf("\nenter a number:");
	scanf("%d", &n);
	float S, counter;
	S=0;
	counter=2;
	
	while(counter<=n){
		S=S+(1/counter);
		counter+=2;
	}
	if(n%2==1){
		counter=n;
		S=S+(1/counter);
	}
	 
	
	printf("\n %f \n\n\n", S);
}
