//1.Ass 1 1. Write a program to check whether a number is even or odd. by using funtype .
#include<stdio.h>
int  evenodd()
{		int n ,res;
	printf("enter no to check even odd");
	scanf("%d",&n);
	if(n%2==0)
	{
	  return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{

   int res=evenodd();
    if(res==1)
    {
    	printf("no is even");
	}
	else
	{
		printf("no is odd");
	}
}
