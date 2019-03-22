//This program is to print the fibonacci series .

#include<stdio.h>

int main()
{
	
	int n,c,a=0,b=1,s=0,i=0;
	
	printf("Enter the number upto which you want the Fibonacci Series:");
	
	scanf("%d",&n);
	
	
	printf("The Fibonacci Series is as follows:");
	
	
	
	
	
	
	for(i=1;i<=n;i++)
	{
		
		printf("%d",a);
		
		s=a+b;
		
		a=b;
		
		b=s;
	
	}

	
return(0);	
	
}
