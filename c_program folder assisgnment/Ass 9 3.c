/*3. Find sum of all numbers by using function .*/
#include<stdio.h>
int sumofarray(int arr[],int n)
{ int i,sum=0;
for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;	
}
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
   int add=sumofarray(arr,n);
   printf("addition is %d",add);
}
