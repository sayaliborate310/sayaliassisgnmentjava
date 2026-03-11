/*5. Print alternate elements in array by using function.*/
#include<stdio.h>
void alternativeno(int arr[],int n)
{
	int i;
	for(i=0;i<n;i=i+2)
	{
     printf("%d",arr[i]);
	}
}
void main()
{
	int i,n,arr[40];
	printf("no in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("entre the element\n");printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("alternative no will be\n");
	
	alternativeno(arr,n);
}
