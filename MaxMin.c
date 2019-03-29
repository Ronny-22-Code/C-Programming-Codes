//This program is to find the maximum and the minimum of the array elemnets .

#include<stdio.h>

int main()
{
	
	int a[40],i,n,m=0,s=0;
	
	printf("Enter the number of array elements:");
	
	scanf("%d",&n);
	
	printf("Enter the array elements:");
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
		
	}
	
	m=a[0];
	
	s=a[0];
	
	for(i=0;i<n;i++)
	{
		
		if(m<a[i])
		{
			
			m=a[i];
			
		}
		
		else
		{
			
			printf("%d",m);
		
		}
	
		
	}

	for(i=0;i<n;i++)
	{
		
		if(s>a[i])
		{
				
			s=a[i];
		
		}		
		
		else
		{
			
			printf("%d",s);
		
			
		}
	
		
	}
	

printf("The maximum element of the array is:");

printf("%d",m);

printf("The minimum element of the array is:");

printf("%d",s);

return(0);

}
