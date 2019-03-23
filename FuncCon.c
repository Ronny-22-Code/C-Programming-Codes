//This program is to create a function which will return the concatenated string.

#include<stdio.h>

#include<string.h>

void concat(char a[50],char b[50]);

int main()

{
	char a[50],b[50];
	
	printf("Enter the strings for Concatenation");
	
	printf(" ");
	
	scanf("%s",a);
	
	scanf("%s",b);
	
	concat(a,b);

	return(0);


}

void concat(char a[50],char b[50])
{
	
	strcat(a,b);
	
	
	printf("%s",a);
	
}

