//This program is to take out the even and odd numbers from the first 100 natural numbers.


#include<stdio.h>


int even();

int odd();

int main()
{
	
printf("The first 100 odd natural numbers are:");

odd();

printf("\n");

printf("The first 100 even natural numbers are:");

even();	
		
return(0);	
	
}

int even()
{
	
	int i;
	
	
	for(i=1;i<=100;i++)
	{
		
		if((i%2)==0)
		{
			
			printf("%d " " ",i);
			
		}
	
	}

return(0);	
	
}

int odd()
{
	
	int i;
	
	for(i=1;i<=100;i++)
	{
		if((i%2)!=0)
		{
			printf("%d " " ",i);
			
		}	
	
	}
return(0);	

}
	
	

