#include <stdio.h>

int main(void)
{
	int n, nn, nnn, i, fac, sum;
	printf("\n enter the limit: ");
	scanf("%d",&n);
	printf("\n strong numbers between 1 and %d: ",n);
	for(nn=1; nn<=n; nn++){
		sum=0;
		for(nnn=nn; nnn>0; nnn/=10){
			fac=1;
	        for(i=1; i<=nnn%10; i++){
	        	fac*=i;
			}
			sum+=fac;
		}
		if(sum==nn)
		printf("\n %d",nn);	
	}
}
