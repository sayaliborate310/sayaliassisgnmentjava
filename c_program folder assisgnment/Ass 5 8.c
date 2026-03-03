/*8. Print a pattern of stars in diamond shape
Input: n = 4
Output:

*
**
***
****
***
**    */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the limit \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
          printf("\n");
	}
	//lower part
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("*");	
		}
 printf("\n");
	}
}
