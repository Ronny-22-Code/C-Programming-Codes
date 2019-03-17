//This program is to check whether a string is a palindrome or not.

#include<stdio.h>
#include<string.h>


int main()
{
	
	char a[20], b[20];
	int l=0,i,j;
	
	
	printf("Enter any string:");
	
	scanf("%s",&a);
	
	
	l=strlen(a);
	
	for(i=l-1;i>=0;i--)
	{
		
		for(j=0;j<l-1;j++)
		{
		
			b[j]=a[i];
		}
	}
	
	for(i=0;i<l-1;i++)
	
	{
		
		for(j=0;j<l-1;j++)
		{
		
			if(a[i]==b[j])
		{
		
			printf("The Entered string is a palindrome");
		
			break;
		
		}
		
		else
		
	{
		printf("The string is not a palindrome");
	
		break;
	
	}
	

	}	
	
}

return(0);


}
