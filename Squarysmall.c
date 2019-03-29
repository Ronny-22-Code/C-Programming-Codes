//This program is to return the list of elements which are greater than the square of the smallest element in the list.

#include<stdio.h>

int main()
{
	
	int a[30],i,n,s;
	
	printf("Enter the number of array elements:");
	
	scanf("%d",&n);
	
	printf("Enter the array elements:");
	
	for(i=0;i<n;i++)
	{
	 
	 scanf("%d",&a[i]);
				
	}
	
	s=a[0];
	
	for(i=0;i<n;i++)
	{
		
		if(s>a[i])
		{
				
			s=a[i];	
		
		}	
		
		break;
	
	}

	for(i=0;i<n;i++)
	{
		if(a[i]>s*s)
		{
			
			printf("%d",a[i]);
		}
		
	break;	
	
	}



return(0);
}
