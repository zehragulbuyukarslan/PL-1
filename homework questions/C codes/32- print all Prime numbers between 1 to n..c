#include <stdio.h>

void main()
{
	int n,i,p; 
	printf("\n enter the limit: ");   //prompt the user for the limit input//
	scanf("%d",&n);      //read the input by user//
	printf("\n prime numbers between 1 to %d:", n);   //print a message//
	for(p=2; p<=n; p++){
		for(i=2; i<p; i++){
			if(p%i==0)
			i=p+2;
		}
		if(i!=p+3)
		printf("\n %d ",p);   //print prime numbers//
	}
	
} 
