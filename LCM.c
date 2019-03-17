// This program is to calculate the LCM of the numbers entered.

#include<stdio.h>

int main()

{
	int n,m,j,i,a[100],b[100];
	
	
	printf("Enter the numbers whose LCM is to be calculated:");
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	
	if((n%m==0)||(m%n==0))
	{
			
		if(n>m)
		{
			
			printf("The LCM of the entered numbers is:");
			printf("%d",n);
		}
		
		else
		{
			printf("The LCM of the entered number is:");
			printf("%d",m);
			
		}
	
	}	
	

	else 
	{
		
		printf("The LCM of the two entered numbers is:");
		
		printf("%d",m*n);
		
	}

return(0);	


	

}
	
	
	
