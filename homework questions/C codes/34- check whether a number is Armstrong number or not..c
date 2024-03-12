#include <stdio.h>

int main(void)
{
	int n,nn,i,ii,sum,pow;
	sum=0;
	pow=1;
	printf("\n enter a number: ");
	scanf("%d",&n);
	nn=n;
	//find power amount//
	for(i=0; nn>0; i++){
		nn/=10;
	}
	//find sum of powered digits//
	for(nn=n; nn>0; nn/=10){
		//find power of digits//
		for(ii=i; ii>0; ii--){
			pow*=nn%10;
		    }
		sum+=pow;
		pow=1;
	}
	if(sum==n)
	printf("\n the number is an Armstrong number!\n\n");
	else
	printf("\n the number is NOT an Armstrong number!\n\n");
}
