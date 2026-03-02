/*7 Find factorial of given number.
Input: n = 5
Output: 120*/
#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("enter the no \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	}
	printf("factorial will be %d\n",fact);
}
