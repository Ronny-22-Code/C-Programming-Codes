//This program is to print the square of the values between 1 and 20 except first 5 elements.

#include<stdio.h>

int main()
{
	
	int i,n;
	
	printf("Enter the limit of the values:");
	
	scanf("%d",&n);
	
	for(i=6;i<=n;i++)
	{
		
	printf("%d",i*i);
	printf(",");		
	}
	
return(0);	
	
}
