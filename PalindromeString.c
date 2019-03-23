//This program is to check whether a string is a palindrome or ont using function.

#include<stdio.h>

#include<string.h>

void pal(char a[50]);

int main()
{
	
	char a[50];
	
	printf("Enter any string:");
	
	scanf("%s",a);
	
	pal(a);
	
return(0);

}

void pal(char a[50])
{
	
	int l=0,i,j;
	
	l=strlen(a);
	
	for(i=0;i<=l-1;i++)
	{
		for(j=l-1;j>=0;j--)
		{
			
			if(a[j]==a[i])
			{
				
				printf("The string is a palindrome:");
			
			}
				
			else
			{
				
				printf("The entered string is not a palindrome:");
				
			}
		
			break;
		
		}
	
			break;
	}	
	
}
