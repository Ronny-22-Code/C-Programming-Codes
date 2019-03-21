//This program is to check the substring .

#include<stdio.h>

int main()
{
	
	char a[20],b[10];
	int i,j;
	
	
	printf("Enter the string:");
	
	scanf("%s",&a);
	
	printf("Enter the substring to check in the main string:");
	
	scanf("%s",&b);
	

	
	
	for(i=0;a[i]!='\0';i++)
	{
		
		for(j=0;b[j]!='\0';j++)
		{
		
			if(b[j]==a[i])			
			{
				
				printf("The substring is found!!!");
				
				
			}
		
			break;
		
		}
		
			break;
	}	


return(0);
}
