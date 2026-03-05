/*2. Search the given number in array.*/
#include<stdio.h>
void main()
{
	int i,n,arr[50];
	printf("enter number in array \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elemnt are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	int no;
	printf("enter the no in array to search \n");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{
		if(arr[i]==no)
		{
			printf(" %d no found at %d pos",arr[i],i);
			break;
			
		}
	}
}
