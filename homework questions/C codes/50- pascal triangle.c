#include <stdio.h>

int main(void){
	
	int row, i, ii, arr1[300], arr2[300];
	
	printf("\n enter the row amount: ");
	scanf("%d",&row);
	printf("\n PASCAL TRIANGLE \n\n");
	
	for(i=1; i<=row; i++){
		
		printf("\n");
		
		ii=1;
		while(ii<=i){
			if(ii==1||ii==i){
				arr1[ii]=1;
			    printf(" %d ",arr1[ii]);
			    	ii++;
			}
			
			else if(ii<=i){
				arr1[ii]=arr2[ii]+arr2[ii-1];
				printf(" %d ",arr1[ii]);
				ii++;
			}	
		}
		
		printf("\n");
		i++;
		
	    if(i<=row){
	    	ii=1;
	    	while(ii<=i){
	    		if(ii==1||ii==i){
	    			arr2[ii]=1;
	    			printf(" %d ",arr2[ii]);
					ii++;	
				}
				
				else if(ii<=i){
					arr2[ii]=arr1[ii]+arr1[ii-1];
					printf(" %d ",arr2[ii]);
					ii++;
				}
			}
		}
	
		
		
	}
	printf("\n\n\n\n\n");
	

}
