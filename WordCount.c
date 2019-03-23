//This program counts the number of words in the string.


#include<stdio.h>

void count(char a[50]);

int main()
{
	
	char a[50];
	
	printf("Enter the string:");
	
	scanf("%s",&a);	
	
	count(a);

return(0);

}


void count(char a[50])
{
	
	int k=1,i;
	
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i]==' ')
		{
			
			k=k+1;
		}
		
	}

printf("The number of words in the string are:");

printf("%d",k);

}
