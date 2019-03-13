//This program is to count the number of digits in a number.

#include<stdio.h>

int main()

{
	
	int n,k=0;
	
	
	printf("Enter any number:");
	
	scanf("%d",&n);
	
	while(n!=0)
	{
		
		n=n/10;
		
		k=k+1;
		
		continue;
	
	}

printf("The number of digits in the entered number is :");

printf("%d",k);

return(0);

}

