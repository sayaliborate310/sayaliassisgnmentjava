/* minmax no in array by using function*/
#include<stdio.h>
int minmaxno(int arr[],int n)
{
	int i,max,min;
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
     printf("\n");	
	printf("minimum elemnt in array is %d",min);
	return max;
	
}
void main()
{
	int arr[50],i,n;
	
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
    int max=minmaxno(arr,n);
    printf("maximum elemnt in array is %d",max);
}
