/*1. Find minimum and maximum number in array.*/
#include<stdio.h>
void main()
{
	int arr[50];
	int i,max ,n,min;
	printf("Enter number of elements: ");
    scanf("%d",&n);
	printf("entre the elemnt of array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elemtent are \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
}
	printf("maximum elemnt in array is %d",max);printf("\n");	
	printf("minimum elemnt in array is %d",min);

}
