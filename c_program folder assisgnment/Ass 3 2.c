/*2 Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the limit \n ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
			
		}
	}
}
