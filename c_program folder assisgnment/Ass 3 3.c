/*3 Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15*/
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
 printf("sum will be %d\n",sum);
}
