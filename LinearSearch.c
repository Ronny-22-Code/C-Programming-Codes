//This program is to perform a linear search.

#include<stdio.h>


void search(int);

int main()

{
	int a ;
	
	printf("Enter the integer to search for :");
	
	scanf("%d",&a);
	
	search(a);
	
	return(0);
}

void search(int a)
{
	
	int n,i,b[50];
	
	printf("Enter the number of elements :");
	
	scanf("%d",&n);
	
	
	printf("Enter the elements in the list:");
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&b[i]);
	
	}
	
	
	for(i=0;i<n;i++)
	{
		
		if(b[i]==a)
		{
			
			printf("The data element is found!!!");
			printf("\n");
			printf("The position of data element is :");
			printf("%d",i+1);
			
			break;
			
		}
	
				
		
		else
		{
			
			printf("Sorry!!! no such data element was found");
			
		}
		
		
		
	}

	

}	
