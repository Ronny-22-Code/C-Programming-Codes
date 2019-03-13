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
			
			cout<<"The entered number is a composite number:";
			
			break;
		}
		
		else
		{
			
			cout<<"The enetered number is a prime number:";
			
		}
		
		
	}

return(0);
		
}
