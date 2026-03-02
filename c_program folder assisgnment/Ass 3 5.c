/*5 Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/
#include<stdio.h>
void main()
{
	int i=0,no,r,sum=0,temp;
	printf("enter the number \n");
	scanf("%d",&no);
	temp=no;
	while(no>0)
	{
		r=no%10;
		sum=sum+r*r*r;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("no is armstrong\n");
	}
	else
	{
		printf("no is not armstrong\n");
	}
}
