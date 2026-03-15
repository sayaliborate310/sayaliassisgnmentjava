//3. Admin (id, name, salary, allowance)
#include<stdio.h>
#include<string.h>
struct admin
{
	int id;
	char name[30];
	float salary;
	float allowance;
};
void store(struct admin *temp)
{
	printf("enter the admin details\n");
	scanf("%d%s%f%f",&temp->id,temp->name,&temp->salary,&temp->allowance);
}
void display(struct admin e)
{
	printf("emp id%d",e.id);
	printf("emp name%s",e.name);
	printf("emp salary%",e.salary);
	printf("emp allowance%f",e.allowance);
	
}
void main()
{
	struct admin a;
	store(&a);
	display(a);
}
