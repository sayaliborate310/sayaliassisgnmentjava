/*3. Write a C program to convert temperature from Celsius to Fahrenheit using the
formula:
F = (C *9/5) + 32*/
#include<stdio.h>
void main()
{
	float cels,fah;
	printf("enter the temperature incelsicus");
	scanf("%f",&cels);
	fah=(cels*9/5)+32;
	printf("tempertaure will be %f",fah);
	
}
