/*4. Print strong numbers in the given range 1 to n.*/
#include<stdio.h>
void main()
{
	int i,n,fact,sum,temp,rem,j;
	printf("enter the limit \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			fact=1;
			for(j=1;j<=rem;j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
			
	}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	
	}
	
}
