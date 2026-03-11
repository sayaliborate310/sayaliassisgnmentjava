/*4. Find odd and even among the numbers by using function*/
#include<stdio.h>
void evenodd(int arr[],int n)
{
	int i;
for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		
		printf("%d no is even \n",arr[i]);
	else
	
	printf("%d no is odd \n",arr[i]);
}
		
}
void main()
{
	int i,n,arr[50];
	printf("no in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elemnt are \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	evenodd(arr,n);
	
	}

