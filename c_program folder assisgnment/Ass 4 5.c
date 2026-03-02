/*5. Write a menu driven program to take a number for user and perform operations as follows.

Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.*/
#include<stdio.h>
void main()
{
	int n,choice,flag=0,i,sum=0,temp,rev=0;
	printf("enter the number :");
	scanf("%d",&n);
	printf("\n1. To check number is even or odd.");
	printf("\n 2.To check number is prime or not.");
	printf("\n 3.To check number is pallindrome or not.");
	printf("\n 4.To check number is positive, negative or zero.");
	printf("\n 5.To reverse a number.");
    printf("\n 6. To find sum of digits.");
	printf("\n enter the choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
	  case 1: if(n%2==0)
		{
			printf("no is even \n");
		}
		else
		{
			printf("no is odd\n");
		}
		
	
	break;
	case 2:
			for (i=2;i<=n/2;i++)
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("%d is prime\n",n);
			}
			else
			{
				printf("not prime \n");
			}
		break;
	case 3: 
	        temp=n;
	        int r;
	        while(temp>0)
	        {
	        	r=temp%10;
	        	rev=rev*10+r;
	        	temp=temp/10;
			}

       if(rev==n)
	   {
	   	printf("no is pallindrome \n");
	   }
	   else
	   {
	   	printf("no is not pallinfrome \n");
	   }
	   break;
	case 4 : 
	       if(n==0)
	       {
	       	printf("\n zero you entered ");
		   }
		   else if(n<0)
		   {
		   	printf("\n no is negative");
		   }
		   else
		   {
		   	printf("\n positive");
		   }
		   break;
	case 5 :
		   while(n>0)
		   {
		   	r=n%10;
		   	printf("%d",r);
		   n=n/10;
	}
		break;
		case 6:while(n>0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
         printf("addition will be %d",sum);
		 break;			
	   default :
	   	printf("invalid choice ");
}

}
