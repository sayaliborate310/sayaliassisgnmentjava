//1.Ass 1 1. Write a program to check whether a number is even or odd. by using funtype 2.
#include<stdio.h>
void evenodd( int n)
{	
	if(n%2==0)
	{
		printf("no is even");
	}
	else
	{
		printf("no is odd");
	}
}
void main()
{
	int n;
	printf("enter no to check even odd");
	scanf("%d",&n);
  evenodd(n);
}
