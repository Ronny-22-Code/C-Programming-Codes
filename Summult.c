//This program is to find the sum of multiple of 3 and 5 between 1 and the number entered.


#include<stdio.h>

int main()
{
	
	int n,i,s=0;
	
	printf("Enter the value of n :");
	
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		if((i%3==0)||(i%5==0))
		{
			
			s=s+i;
			
		}
		
	}
	

printf("The sum of the multiple of 3 and 5 is :");

printf("%d",s);

return(0);


}
