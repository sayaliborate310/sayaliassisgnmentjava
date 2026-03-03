/*1. Print a solid square pattern
Input: n = 4
Output:

* * * *
* * * *
* * * *
* * * * */
#include<stdio.h>
void main()
{
	int i,n,j;
	printf("enter the limit \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*  ");
		}
		printf("\n");
	}
	
}
