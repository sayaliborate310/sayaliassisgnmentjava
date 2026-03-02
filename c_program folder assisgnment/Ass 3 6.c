/*6 Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect*/
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter the no \n");
	scanf(" %d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		//	printf("divided by %d",i);
			sum=sum+i;			
		}
	}
	if(sum==n)
	{
		printf("no is perfect\n");
	}
	else
	{
		printf("no is not perfect ");
	}
}
