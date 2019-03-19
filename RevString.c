//This program is to reverse a string.

#include<stdio.h>
#include<string.h>

int main()
{
	
	char string[30];
	
	int i,l=0;
	
	printf("Enter the string:");
	
	scanf("%s",&string);
	
	l=strlen(string);
	
	for(i=l-1;i>=0;i--)
	{
		
		printf("%c",string[i]);
		
	}
	
	
return(0);

}
