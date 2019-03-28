//This program is to return the square of eaach element in the array.

#include<stdio.h>

int main()
{
	
	int a[30],i,n;
	
	printf("Enter the size of the array:");
	
	scanf("%d",&n);
	
	printf("Enter the array elements:");
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		
		printf("%d",a[i]*a[i]);
		printf(" ");
	}

return(0);

}
