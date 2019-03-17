//This program is to print the pattern of lower traingular matrix.

#include<stdio.h>

int main()

{
	
	int i,j,n,a[5][5];
	
	printf("Enter the limit of the pattern:");
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
			
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				printf(" ");
				
				printf("\n");
			}
				
			
			
			else
			
			{
				printf("*");
				
			}
		
		}
	
	
	}	
	
return(0);

}
