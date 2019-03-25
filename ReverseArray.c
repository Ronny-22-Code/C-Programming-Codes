//This program is to reverse an array .

#include<stdio.h>

int main()
{
	
	int a[20],i,n;
	
	printf("Enter the array limit:");
	
	scanf("%d",&n);
	
	printf("Enter the array elements:");
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
		
	}
	
	for(i=n-1;i>=0;i--)
	{
		
		printf("%d",a[i]);
		printf(" ");
	}

return(0);


}
