#include<stdio.h>

int main()
{
	
	int a,b;
	
	printf("Enter the first variable :");
	
	scanf("%d",&a);
	
	printf("Enter the second variable:");
	
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("The variables after swapping are: \n");
	
	printf("The first variable is :");
	
	printf("%d \n",a);
	
	printf("The second variable is :");
	
	printf("%d \n",b);
	
return(0);

}
