#include<stdio.h>
#include<string.h>
int mystrcat(char str1[],char str2[],int size)
{
	int i=0,j=0;
	while(str1[i]!='\0' )
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		if(i>size-1)
		{
			return -1;
		}
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	return 0;
}
void main()
{
	char str1[5]={"abc"};
	char str2[]={"pqrs"};
	/*strcat(str1,str2);
	printf("%s",str1);*/
	int res=mystrcat(str1,str2,5);
	if(res==0)
	{
		printf("%s",str1);
	}
	else
	{
		printf("memory overflow");
	}
}
