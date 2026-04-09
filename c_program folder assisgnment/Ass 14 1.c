#include<stdio.h>
#include<stdlib.h>
typedef struct book
{
	int bookid;
	float price;
	char author[30];
	char bname[30];
}book;
void main()
{
	book b;
	printf("entre the bookid");
	scanf("%d",&b.bookid);
	
	printf("entre the price\n");
	scanf("%f",&b.price);
	
	printf("enter the author name\n");
	scanf("%s",b.author);
	
	printf("entre the book name\n");
	scanf("%s",b.bname);
	
	printf("bookid :%d\n bookprice=%f\n book author=%s\n bookname=%s\n",b.bookid,b.price,b.author,b.bname);
}
