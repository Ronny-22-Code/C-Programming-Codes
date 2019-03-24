//This program is to check whether a number is a palindrome or not .

#include<stdio.h>

#define bool int 
#define true 1
#define false 0

void pal(int);

int main()
{
	
	int a;
	
	printf("Enter the number:");
	
	scanf("%d",&a);
	
	pal(a);
	
return(0);

}
	
void pal(int a)
{
	
	int d=0,r=0,k=0;
	
	bool c[]={true,false};
	
	
	k=a;
	
	while(a!=0)
	{
		
		r=a%10;
		
		d=d*10+r;
		
		a=a/10;
		
	}
	
	


	if(k==d)
	{
		
		printf("%d",c[0]);
	
	}

	else
	{
		
		printf("%d",c[1]);
	
	}



}



