#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,i,n;
	
	printf("\nenter a number:\n ");
	scanf("%d", &a);
	
	printf("enter another number:\n");
	scanf("%d", &b);
	
	printf("enter the divider number: \n");
	scanf("%d", &n);
	
	if(a<=b){
		i=a;
		printf("divisable numbers between numbers that you entered: ");
		while(i<=b){
			if(i%n==0) printf("\t %d, ", i);
			i++;
		}
		printf("\n\n\n");
	}
	else{
		i=b;
		printf("divisable numbers between numbers that you entered:");
		while(i<=a){
			if(i%n==0) printf("\t %d,", i);
			i++;
		}
     	printf("\n\n\n");
	}
}
