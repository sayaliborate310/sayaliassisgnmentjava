/*4. Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"*/
#include<stdio.h>
void main()
{
	float marks;
	printf("enter the marks of student \n");
	scanf("%f",&marks);
	if(marks>=75)
	{
		printf("distinction\n");
	}
	else if(marks>=65)
	{
		printf("first  class\n");
	}
	else if(marks>=55)
	{
		printf("second class\n");
	}
	else if(marks>=40)
	{
		printf("pass class\n");
	}
	else
	{
		printf("fail");
	}
}
