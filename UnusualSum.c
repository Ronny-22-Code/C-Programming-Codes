// This program is to print the unusual sum .

#include<stdio.h>


int main()

{
	int s=0,n,g,h,k;
	
	printf("Enter the number for the unusual sum program :");
	
	scanf("%d",&n);
	
	g=n*10+n;
	
	k=n*100+g;
	
	h=n*1000+k;	
		
	s=g+k+h+n;
	
	printf("The unusual sum of the expression is :");
	
	printf("%d",s);

return(0);

}
