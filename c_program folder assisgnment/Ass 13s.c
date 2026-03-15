#include<stdio.h>
#include<string.h>
 struct student
{
	int rollno;
	char name[50];
	float marks;
};
void store(struct student *temp)
{
	printf("enter the rollno name and marks \n");
	scanf("%d%s%f",&temp->rollno,temp->name,&temp->marks);
}
void display(struct student s)
{
	printf("rollno=%d",s.rollno);
	printf("\n name =%s",s.name);
	printf("\n marks =%f",s.marks);
}
void main()
{
	struct student s1;
	store(&s1);
	display(s1);
	
}

