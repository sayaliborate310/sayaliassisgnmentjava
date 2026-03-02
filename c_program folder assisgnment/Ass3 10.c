/*10 Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)*/
#include<stdio.h>
void main()
{
	int n,last,first,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	first=n%10;
	while(n>=10)
	{
      n=n/10;	
	}
   last=n;
   sum=first+last;
   printf(" sum of first and last will ne %d",sum);
}
