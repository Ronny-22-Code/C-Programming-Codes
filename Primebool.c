//This program is to return the bool value if the number is prime or not.

#include<stdio.h>

#define bool int
#define true 1
#define false 0

void Bool();

int main()
{
	
	int a ;
	
	printf("Enter the number:");
	
	scanf("%d",&a);
	
	Bool(a);
	
return(0);	

}

void Bool(int a)
{
	
	bool c[]={true,false};
	
	int i;
	
	
	for(i=2;i<a;i++)
	{
		
		if(a%i==0)
		{
			
			printf("%d",c[1]);
			
		}
		
		else
		{
			
			printf("%d",c[0]);
			
		}
	
		break;
	}
	
	
}
