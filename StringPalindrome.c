//This program is to check whether a string is a palindrome or not.

#include<stdio.h>
#include<string.h>
#include<process.h>

int main()

{
	char a[30];
	int i,j,l=0;
	
	printf("Enter the string :");
	
	scanf("%s",a);
	
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		
		for(j=l-1;j>0;j--)
		{
			
			if(a[i]==a[j])
			{
				
				printf("The string is a palindrome ");
				
					break;		
			
			}	
				
		
			else
			{
				
				printf("The string is not a palindrome ");
				
					break;
			
			}
				
		}
		
	}
	
return(0);	
	
}
