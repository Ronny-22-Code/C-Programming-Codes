// This program is to calculate the factorial of a number.

#include<stdio.h>

int main()
{
	
	int f=1,n,i;
	
	printf("Enter the number whose factorial is to be calculated:");
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		f=f*i;
			
	}
	
	printf("The factorial of the entered number is:");
	
	printf("%d",f);
	
	return(0);	


}
