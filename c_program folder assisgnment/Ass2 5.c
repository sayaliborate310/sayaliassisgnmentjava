/*5. Accept the price from user. Ask the user if he is a student (user may say y or n). If heis a student and he has purchased more than 
500 than discount is 20% otherwise discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/
#include<stdio.h>
void main()
{
	float price,discount=0,finalamt;
	printf("enter the price \n");
	scanf("%f",&price);
	char ch;
	printf("enter the user who he is \n");
	scanf(" %c",&ch);
	if(ch=='y')
	{
		if(price>500)
		{
		discount=price*0.20;	
		}
		else
		{
			discount=price*0.10;
		}
	}
	else if(ch=='n')
	{
	if(price>600)
	{
		discount=price*0.15;
	}
	else
	{
		printf("no discount");
	}
}

finalamt=price-discount;
printf("discount get is :%f",discount);
printf("final amount is :%f",finalamt);
}


