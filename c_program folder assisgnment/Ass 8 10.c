/*10. Sort the array.*/
#include<stdio.h>
void main()
{
	int i,n,arr[40],temp,j;
	printf("size of array \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array will be \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("array after sorting \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
