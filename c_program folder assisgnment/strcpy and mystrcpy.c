#include<stdio.h>
#include<string.h>
int mystrcpy(char str1[],char str2[])
{
	int i=0;
	while(str2[i]!='\0')
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
	return 0;

}
void main()
{
	char str1[]={"abc"};
	char str2[]={"pqrs"};
	/*strcpy(str1,str2);
	printf("%s",str1);*/
	int res=mystrcpy(str1,str2);
	if(res==0)
	{
		printf("%s",str1);
	}
	else
	{
		printf("memory error");
	}
}
