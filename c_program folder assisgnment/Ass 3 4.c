/*4 Check the given number is prime or not.
Input: n = 7
Output: Prime*/
#include<stdio.h>
void main()
{
	int i,n,flag=0;
	printf("enter the no \n:");
	scanf("%d",&n);
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
