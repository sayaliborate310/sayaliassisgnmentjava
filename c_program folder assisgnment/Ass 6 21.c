 /*4 Check the given number is prime or not.
Input: n = 7
Output: Prime w/o return type with parameter*/
#include<stdio.h>
void isprime(int n)
{     
     int i,flag=0;
	if(n<=1)
	{
		printf("no is not prime");
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("no is prime \n");
		}
		else
		{
			printf("no is not prime \n");
		}
	}	
}
void main()
{
	int n;
	printf("enter the no \n:");
	scanf("%d",&n);
    isprime(n);
	
}
