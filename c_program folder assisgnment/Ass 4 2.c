/*2. Print prime numbers in the given range 1 to n.*/
#include<stdio.h>
void main()
{
	int i,n,j,isprime;
	printf("enter the range :");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		isprime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		{
			printf("%d\n",i);
		}
}
}
