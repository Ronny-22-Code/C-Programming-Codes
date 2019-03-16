// This program is to find the factors of the number.

#include<stdio.h>

int main()
{
	
	int i,n;
	
	
	printf("Enter the number:");
	
	scanf("%d",&n);
	
	
	printf("The factors of the number are:");
	
	for(i=2;i<=n;i++)
	{
		
		if(n%i==0)
		{
			
			printf(" ");
			
			printf("%d",i);
			
		}
		
	}
	
return(0);	
	
	
}
