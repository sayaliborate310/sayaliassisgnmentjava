/*8. Merge two arrays*/
#include<stdio.h>
void main()
{
	int i,n,n1,arr[50],brr[50];
	printf("size of array 1 \n");
	scanf("%d",&n);
	printf("size of array 1 \n");
	scanf("%d",&n1);
	printf("enter the first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the second array\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("first array will be\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("second array will be \n");
	for(i=0;i<n1;i++)
	{
		printf("%d",brr[i]);printf("\n");
	}
	printf("merge array will be \n");
	for(i=0;i<n1;i++)
	{
	 arr[n+i]=brr[i];    	
	}
		for(i=0;i<n+n1;i++)
	{
		printf("%d ",arr[i]);
	}
}
