//This program is to count a particular character in a string.

#include<stdio.h>

int main()
{
	int k=0,i;
	
	char str[30],a;
	
	printf("Enter the string:");
	
	scanf("%s",&str);
	
	printf("Enter the character to count for in the string:");
	
	scanf(" %c",&a);
	
	for(i=0;str[i]!='\0';i++)
	{
		
		if(str[i]==a)
		{
			
			k++;	
			
		}	
		

	}	
	
printf("The number of occurences of the entered character in the string is:");

printf("%d",k);	
	
return(0);

}	
	

