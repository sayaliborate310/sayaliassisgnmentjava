//2.Ass1.2.Write a program to check given 3 digit number is pallindrome or not. funtype 3.
#include<stdio.h>
int pallindrome()
{    int n;
	printf("enter the 3 digit no ");
	scanf("%d",&n);
	int first,last;
	if(n>100 && n<999)
	{
	  first=n/100;
	  last=n%10;
	  if(first==last)
	  {
	      return 1; 	 
	  }
	  else
	  {
	  	return 0;          
	  }
	  }
	  else
	  {
	    return -1;      	
	  }
}
void main()
{
	int res;
	res=pallindrome();
	if(res)
	{
	printf("no is pallindrome");	
	}else if(res==0)
	{
	printf("no is not pallindrome");	
	}
	else
	{
	printf("invalid no");	
	}
}
