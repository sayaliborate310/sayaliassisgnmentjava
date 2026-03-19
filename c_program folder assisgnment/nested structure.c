//nested structure
typedef struct date
{
	int day;
	int month;
	int year;
}date;
typedef struct student
{
	int rollno;
	char name[10];
	date dob;
}student;
void main()
{
	student s1;
	printf("enter the student details\n");
	scanf("%d%s%d%d%d",&s1.rollno,s1.name,&s1.dob.day,&s1.dob.month,&s1.dob.year);
	printf("student details are\n");
	printf("rollno-%d name-%s dob=%d-%d-%d",s1.rollno,s1.name,s1.dob.day,s1.dob.month,s1.dob.year);
	
}
