//This program is to return a bool value if a number is even or not.


#include<stdio.h>



#define bool int 

#define true 1

#define false 0

void Bool(int);


int main()
{
	
	int a;
	
	
	printf("Enter the number :");
	
	scanf("%d",&a);
	
	Bool(a);

return(0);

}

void Bool(int a)
{
	
	bool c[]={true,false};
	
	if(a%2==0)
	{
		
		printf("%d",c[0]);	
	
	}
	
	else
	{
		
		printf("%d",c[1]);
	
	
	}
}
