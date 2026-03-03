/*2 Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50 w/o return type with parameter using pointer*/
#include<stdio.h>
void multiply(int *n)
{
	int i;
for(i=1;i<*n;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
			
		}
	}	
}
void main()
{
	int i,n;
	printf("enter the limit \n ");
	scanf("%d",&n);
	multiply(&n);
}
