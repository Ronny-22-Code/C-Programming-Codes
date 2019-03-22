//This program is to check for the non-repeated character in a string.

#include<stdio.h>

#include<string.h>

int main()
{
	
	int i,j,l=0;
	char a[50];
	
	
	printf("Enter the string:");
	
	scanf("%s",&a);
		
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		
		for(j=i+1;j<l;j++)
		{
			
			if(a[j]!=a[i])
			{
				
				printf("%c",a[j]);
				
			}
			
		}
		
	}
	


return(0);

}

