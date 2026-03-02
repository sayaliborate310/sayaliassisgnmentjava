/*1. Print armstrong numbers in the given range 1 to n.*/
#include<stdio.h>
void main()
{
	int i,n,temp,sum,r;
	printf("enter the limit \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			r=temp%10;
			sum=sum+r*r*r;
			temp=temp/10;
		}
		if(sum==i)
		{
		   printf("%d no is armstrong\n",i);
		}
	}
}
