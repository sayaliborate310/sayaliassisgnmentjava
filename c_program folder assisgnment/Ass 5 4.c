/*4. pyramid pattern
Input: n = 5
Output:
*
**
***
****
*****  */
#include<stdio.h>
void main()
{
	int i,n,j;
	printf("enter the limit \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*  ");
		}
		printf("\n");
	}
}
