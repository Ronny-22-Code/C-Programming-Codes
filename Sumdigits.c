//This program is to find the sum of the digits of a number.

#include<stdio.h>

void sumdigit(int);

int main()
{
	
	int a;
	
	printf("Enter the number:");
	
	scanf("%d",&a);
	
	sumdigit(a);
	
return(0);	

}

void sumdigit(int a)
{
	
	int d=0,r=0,s=0;
	
	
	while(a!=0)
	{
	
		r=a%10;
		
		s=s+r;		
	
		a=a/10;
	
	}

	printf("The sum of the digits will be:");
	
	printf("%d",s);

}
