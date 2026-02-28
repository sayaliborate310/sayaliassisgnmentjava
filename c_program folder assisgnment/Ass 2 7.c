/*7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively. Total Salary = Basic + DA + TA + HRA*/
#include<stdio.h>
void main()
{
	float total ,basic ,da,ta,hra;
	printf("entre the basic salary:");
	scanf("%f",&basic);
	if(basic<=5000)
	{
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
	}
	total=basic+da+ta+hra;
	printf("total salary will be:%f",total);
	
}
