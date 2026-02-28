//1. Write a program to check whether a number is even or odd.
#include<stdio.h>
void main()
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
