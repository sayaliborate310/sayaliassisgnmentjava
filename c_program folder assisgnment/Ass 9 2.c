/*2. Search the given number in array by using function and pointer.*/
#include<stdio.h> 
int search(int arr[],int n,int *pos,int *num)
{
	int no,i;
	printf("enter the no in array to search \n");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{
		if(arr[i]==no)
		{
		 *pos=i;
		 *num=arr[i];
		 return ;
			
		}
	}	
}
void main()
{
	int i,n,arr[50],pos,num;
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
    search(arr,n,&pos,&num);
    if(pos)
    {
    	printf("%d no is found at %d position",num,pos);
	}
    {
    	
	}
}
