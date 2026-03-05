/*6. Accept array and print only prime numbers of array.*/
#include<stdio.h>
void main()
{
	int i,n,arr[50],j,count;
	printf("total no in array \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elemnt are :"); printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
    for(i=0;i<n;i++)
    {
    	count=0;
    	if(arr[i]>0)
    	{
    	for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				count=1;
			}
			}	
		}
		if(count==0)
		{
			printf("%d no is prime\n",arr[i]);
		}
	}
     
}
