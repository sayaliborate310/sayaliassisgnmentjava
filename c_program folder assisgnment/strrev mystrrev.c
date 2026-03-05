#include<stdio.h>
#include<string.h>
void  mystrrev(char str[])
{
int i=0,temp,j=0;
while(str[j]!='\0')
{
	j++;
	}
	j=j-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	
	i++;
	j--;
}
printf("%s",str);

}
void main()
{
	char str[]={"sayaliborate"};
/*	strrev(str);
	printf("%s",str);*/
   	mystrrev(str);
}
