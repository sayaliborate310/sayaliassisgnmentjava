//1. Write a program to check whether a number is even or odd. by using funtype 1.
#include<stdio.h>
void evenodd()
{
		int n;
	printf("enter no to check even odd");
	scanf("%d",&n);
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
  evenodd();
}
