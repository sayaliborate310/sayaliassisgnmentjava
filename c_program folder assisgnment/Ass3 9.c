/*9 Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/
#include<stdio.h>
void main()
{
	int i,n,temp,r,rev=0;
	printf("enter the no\n");
	scanf(" %d",&n);
    temp=n;
    while(n>0)
    {
    	r=n%10;
    	 rev=rev*10+r;
    	 n=n/10;
    }
    if(rev==temp)
    {
    	printf("no is pallindrome \n");
	}
	else
	{
		printf("no is not pallinfrome \n");
	}
}
