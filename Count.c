//This program is to count the special characters , digits and characters.

#include<stdio.h>

#include<string.h>

int main()

{
	int k=0,i,j=0,d=0,b=0,l=0;
	
	char a[50];
 	
	printf("Enter the string :");
	
	scanf("%s",&a);
		
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
			
		if((a[i]>=48)&&(a[i]<=57))
		
		{
			
			k++;
			
		}
	
		else if((a[i]>=65)&&(a[i]<=90))
		
		{
			
			d++;
			
		}
	
	
		else if ((a[i]>=97)&&(a[i]<=122))
		
		{
			
			b++;
			
		}
	
	
		else
		
		{
			j++;
		
		}
	
	}	
	
	
printf("The number of special characters in the entered string is :");

printf("%d",j);

printf("\n");


printf("The number of lowercase  characters in the entered string is :");

printf("%d",b);

printf("\n");

printf("The number of uppercase characters in the entered string is :");

printf("%d",d);

printf("\n");

printf("The number of digits in the entered string is :");

printf("%d",k);

printf("\n");

return(0);

}
