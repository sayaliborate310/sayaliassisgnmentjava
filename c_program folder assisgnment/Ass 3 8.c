/*8 Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/
#include<stdio.h>
void main()
{
	int i,n,r,temp,sum=0;
	printf("enter the no :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		
	
	int fact=1;
	for(i=1;i<=r;i++)
	{
		fact=fact*i;
	}
	sum=sum+fact;
	n=n/10;
}
	if(sum==temp)
	{
		printf("no is positive \n");
	}
	else
	{
		printf("no is not positive\n");
	}
}
