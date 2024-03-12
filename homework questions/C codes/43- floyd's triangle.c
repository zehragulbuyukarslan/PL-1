#include <stdio.h>

int main(void)
{
	int r,i,ii;
	
	printf("\n enter the row amount: ");
	scanf("%d",&r);
	printf("\n FLOYD'S TRIANGLE \n\n");
	
	for(i=1; i<=r; i++){
		
		if(i%2==1){
			for(ii=1; ii<=i; ii++){
			printf(" 1 ");
			ii++;
			if(ii<=i)
			printf(" 0 ");
		    }
		}
		
		
		printf("\n");
		i++;
		
		
		if(i<=r){
			for(ii=1; ii<=i; ii++){
			printf(" 0 ");
			ii++;
			if(ii<=i)
			printf(" 1 ");
		    }
		}
		
		printf("\n");
	}
	printf("\n\n\n");
}
