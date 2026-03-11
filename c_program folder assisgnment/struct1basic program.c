#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	double salary;
};
void main()
{
	struct employee e1,e2;
	e1.id=101;
   strcpy(e1.name,"abc");
   e1.salary=10000;
   printf("enter id name and salary");
   scanf("%d",&e2.id);
   scanf("%s",e2.name);
   scanf("%lf",&e2.salary);
   printf("employee details are :\n");
   printf("empid=%d name=%s salary=%lf",e1.id,e1.name,e1.salary);
   printf("empid=%d name=%s salary=%lf",e2.id,e2.name,e2.salary);
}
