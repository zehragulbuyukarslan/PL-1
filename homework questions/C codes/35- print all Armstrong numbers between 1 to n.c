#include <stdio.h>

int main(void)
{
	int n,nn,p,i,ii,sum,pow;
	sum=0;
	pow=1;
	printf("\n enter the limit: ");
	scanf("%d",&n);
	printf("all Armstrong numbers between 1 to %d: ",n);
	//question i counter is an armstrong number or not?//
	for(i=1; i<=n; i++){
	//store i value//	
	nn=i;
	//find power amount (which is the digit amount)//
	for(p=0; nn>0; p++){
		nn/=10;
	}
	//find sum of powered digits//
	for(nn=i; nn>0; nn/=10){
		//find power of digits//
		for(ii=p; ii>0; ii--){
			pow*=nn%10;
		    }
		sum+=pow;
		pow=1;
	}
	if(sum==i)
    printf(" %d, ",i);
    sum=0;
	}
}
