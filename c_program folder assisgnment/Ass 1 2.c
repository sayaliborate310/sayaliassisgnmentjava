//2. Write a program to check given 3 digit number is pallindrome or not.
#include<stdio.h>
void main()
{
	int n,first,last;
	printf("enter the 3 digit no ");
	scanf("%d",&n);
	if(n>100 && n<999)
	{
	  first=n/100;
	  last=n%10;
	  if(first==last)
	  {
	  	printf("no is pallindrome");
	  }
	  else
	  {
	  	printf("no is not pallindrome");
	  }
	  }
	  else
	  {
	  	printf("invalid no");
	  }
}

