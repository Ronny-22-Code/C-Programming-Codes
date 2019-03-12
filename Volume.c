//This program is to print the volume of the sphere.


#include<stdio.h>

int main()

{
	int r=0;
	
	float v=0;
	
	printf("Enter the value of radius of the sphere");
	
	scanf("%d",&r);
	
	v=(4/3)*3.14*r*r*r;
	
	printf("The volume of the sphere is given as :");
	
	printf("%f",v);
	
return(0);

}

