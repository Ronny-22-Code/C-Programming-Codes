// This program is to check for a number is prime or not.


#include<stdio.h>

int main()
{
	int i,n;
	
	printf("Enter any number:");
	
	scanf("%d",&n);
	
	
	for(i=2;i<=n;i++)
	{
		
		if((n%i)==0)
		{
			
			printf("The entered number is a composite number");
			
			break;
		}
		
		else
		{
			
			printf("The entered number is a prime number");
			
			break;
		
		}
		
		
	}

return(0);
		
}
