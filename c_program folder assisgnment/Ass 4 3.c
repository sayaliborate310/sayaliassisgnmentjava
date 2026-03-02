/*3. Print perfect numbers in the given range 1 to n.*/
#include<stdio.h>
void main()
{
	int i,n,temp,j,sum;
	printf(" enter the limit \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
	     sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
	
	if(sum==i)
	{
		printf("%d\n",i);
	}
}
}
