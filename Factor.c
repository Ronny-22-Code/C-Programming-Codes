//This program is to find the factors of a given number.

#include<stdio.h>

int main()
{
	
	int m,i;
	
	printf("Enter any number:");
	
	scanf("%d",&m);
	
	
	printf("The factors of the entered number other than 1 and the number itself are:");
	
	for(i=2;i<m;i++)
	{
		
		if(m%i==0)
		{
			
			printf("%d",i);
			printf(" ");
		}
		
	}
	
	
return(0);

}
