// This program is to swap the two strings.

#include<stdio.h>
#include<string.h>

int main()

{
	char a[20],b[20],c[20];
	
	int i,j,l=0,k=0,d,r=0;
	
	printf("Enter the string:");
	
	scanf("%s",a);
	
	printf("Enter another string:");
	
	scanf("%s",b);	
	
	l=strlen(a);
	
	k=strlen(b);
	
	r=k+l;
	
	for(i=0;i<l;i++)
	{
		
		for(j=0;j<k;j++)
		{
			
			for(d=0;d<r;d++)
			{
				
				c[d]=a[i];
				a[i]=b[j];
				b[j]=c[d];
				
			}
			
		}
	
	}


printf("The strings after swapping is :");

printf("%s",b);

printf(" ");

printf("%s",a);


return(0);


}
