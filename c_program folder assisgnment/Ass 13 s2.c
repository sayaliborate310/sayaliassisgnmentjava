//2. Employee (id, name, salary)
#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[30];
	float salary;
};
void store(struct employee *e)
{
	printf("enter the eployee information\n");
	scanf("%d%s%f",&e->id,e->name,&e->salary);
}
void display(struct employee e)
{
printf("%d employeeid",e.id);
printf("\n%s employee name",e.name);
printf("\n%f employee salary",e.salary);	
}
void main()
{
	struct employee e1;
	store(&e1);
	display(e1);
	
}
