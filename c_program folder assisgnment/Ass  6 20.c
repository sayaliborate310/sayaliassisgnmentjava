/*3 Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15  funtype 3*/
 #include<stdio.h>
void sumofdigit(int n)
{ int i,sum=0;
		for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
 printf("sum will be %d\n",sum);
}
void main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
    sumofdigit(n);
}
