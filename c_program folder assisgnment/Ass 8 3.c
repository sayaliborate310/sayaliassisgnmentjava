/*3. Find sum of all numbers.*/
#include<stdio.h>
void main()
{
	int i,n,arr[60],sum=0;
	printf("entre ho many no in array \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" array elemnt are \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum will be %d",sum);
}
