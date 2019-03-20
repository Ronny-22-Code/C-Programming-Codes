// This program is to count the number of non-repeated characters in the string.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50],b[50];
	
	int l=0,i,j,k=0;
	
	
	printf("Enter the any String :");
	
	scanf("%s",&a);
	
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		for(j=l-1;b[j]!=0;j--)
		{
			
				if(b[j]!=a[i])
		
				{
						k++;
			
				}
			
			}
		
		}
		
printf("The number of characters which are non-repeated are:");		
	
printf("%d",k);	
	


return(0);	
	
	}
	
	
	

