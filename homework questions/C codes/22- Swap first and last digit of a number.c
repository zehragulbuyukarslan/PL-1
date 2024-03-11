#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n,m,i,a,b,first,last;
	
	printf("\nenter a number:");
	scanf("%d", &n);
	m=n;
	i=0;
	if(n<0){
		n=n*(-1);
			while(n>0){
	    	i++;
	    	n/=10;}
    }
    else{
	while(n>0){
		i++;
		n/=10;}
	}
	n=m;
	if(n<0)  
	n=n*(-1);
	last=n%10;
	while(n>9)
	n/=10;
	first=n;
	
	b=1;
	i--;
	while(i>0){
	b*=10;
	i--;
    }
	
	printf("\n");
	if(m<0){
		a=m;
		a+=(first*b);
		a+=last;
		a-=first;
		a-=(last*b);

		printf("%d", a);
	}
	
	else{
		a=m;
	    a-=first*b;
	    a-=last;
		a+=first;
	    a+=last*b;
	    printf("%d", a);
    }
}
