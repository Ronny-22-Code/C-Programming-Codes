//This program is to insert a number at a particular index in the list of integers.

#include<stdio.h>

int main()

{
	int i,a[20],n,d,p;
	
	printf("Enter the size of the array elements :");
	
	scanf("%d",&n);
	
	printf("Enter the array elements:");
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	
	}
	
	printf("Enter the data element to insert");
	
	scanf("%d",&d);
	
	printf("Enter the position to insert");
	
	scanf("%d",&p);
	
for (i= n-1; i >= p-1; i--)
    {
	    a[i+1] = a[i];
 
   a[p-1] = d;
}


for(i=0;i<n+1;i++)
{
	
	printf("%d",a[i]);
}

return(0);
}
