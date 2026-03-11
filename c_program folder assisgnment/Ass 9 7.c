/*7. Take two array and add sum in third array

Example-
arr[5]= {1,2, 3, 4,5}

brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}  by using function */
#include<stdio.h>
void addarray(int arr[],int brr[],int n)
{
	int crr[50];
	int i;
   for(i=0;i<n;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
    printf("third array will be \n");
    for(i=0;i<n;i++)
    {
    	printf("%d ",crr[i]);
	}	
}
void main()
{
	int i,n,arr[50],brr[50];
	printf("total no of element \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the array element\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	//second array
	printf("second array element are\n");
		for(i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("enter the array element\n");
	for(i=0;i<n;i++)
	{
		printf("%d",brr[i]);
	}
	addarray(arr,brr,n);
}
