#include<stdio.h>
void main()
{
    int arr[50],i,n,sum=0,min,max,key,flag=0;
    printf("enter how many elemnts inarray will be\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("array elemnts are /n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	printf("enter the no to search\n");
	scanf("%d",&key);
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			printf("no is found at %d position ",mid+1);
			break;
		}
		else if(key>arr[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(low>high)
	{
		printf("no is not found\n");
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	int temp,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("array after ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d no is found at %d poaition",arr[i],i+1);
	}
	else
	{
		printf("not found");
	}
}
	*/
	
	
	
	
	
	
	
	
	/*
	int temp;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	printf("after reversing array");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}*/
	
	
	
	/*for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum will be \n %d",sum); printf("\n");
	int avg=0;
	avg=sum/n;
	printf("average of array is %d\n",avg);
	printf("\n");
	int even=0,odd=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("total even no will be %d\n",even);
	printf("\n");
	printf("total odd no will be %d\n",odd);
	max=arr[0];

	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("maximun elemnt in array will be %d\n",max); printf("\n");
		min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}	
	}
	printf("minimum elemnt in array will be %d\n",min);*/
	
