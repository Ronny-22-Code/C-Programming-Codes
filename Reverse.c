//This program is to reverse the entered number using functions.

#include<stdio.h>

void reverse(int);

int main()
{
	
	int a;
	
	printf("Enter the number to reverse:");
	
	scanf("%d",&a);
	
	reverse(a);
	
return(0);	
	
}

void reverse(int a)
{
	int r=0,i,d=0;
	
	while(a!=0)
	{
		
		r=a%10;
			
		d=d*10+r;
			
		a=a/10;
		
	}
	
	
printf("The reversed number is:");

printf("%d",d);	
	
}
