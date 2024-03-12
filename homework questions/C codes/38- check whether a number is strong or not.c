#include <stdio.h>

int main(void)
{
   int n,nn,i,sum,fac;
   printf("\n enter a number: ");
   scanf("%d",&n);
   sum=0;
   for(nn=n; nn>0; nn/=10){
   	fac=1;
   	    for(i=1; i<=nn%10; i++){
   		fac*=i;
 	   }
 	   sum+=fac;
   }
   if(sum==n)
   printf("\n %d is a stong number!",n);
   else
   printf("\n %d is NOT a stong number!",n);
}
