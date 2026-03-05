#include<stdio.h>
#include<string.h>
char* mystrncpy(char dest[],char src[],int n)
{
	int i;
for(i=0;i<n && src[i]!='\0';i++)
{
	dest[i]=src[i];
	}	
	return dest;
	
}
void main()
{
	char src[]={"programming"};
	char dest[30];
	int n;
/*	strncpy(dest,src,5);
	dest[5]='\0';
	printf("%s\n",dest);*/
	char *p;
	p=mystrncpy(dest,src,3);
	printf("%s",p);
}
