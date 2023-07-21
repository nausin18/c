#include<stdio.h>
struct book
{
	char title[50];
	char author[30];
	int pages;
	float price;
}b1,b2,b3;
void main()
{
	printf("Enter title,author,pages and price of book 1:");
	scanf("%s%s%d%f",b1.title,b1.author,&b1.pages,&b1.price);
	printf("Enter title,author,pages and price of book 2:");
	scanf("%s%s%d%f",b2.title,b2.author,&b2.pages,&b2.price);
	printf("Enter title,author,pages and price of book 3:");
	scanf("%s%s%d%f",b3.title,b3.author,&b3.pages,&b3.price);
	printf("\n Book information:");
	printf("\n BOOK 1");
	printf("\n Title : %s",b1.title);
	printf("\n Author name : %s",b1.author);
	printf("\n Number of pages : %d",b1.pages);
	printf("\n Price : %f",b1.price);
	printf("\n BOOK 2");
	printf("\n Title : %s",b2.title);
	printf("\n Author name : %s",b2.author);
	printf("\n Number of pages : %d",b2.pages);
	printf("\n Price : %f",b2.price);
	printf("\n BOOK 3");
	printf("\n Title : %s",b3.title);
	printf("\n Author name : %s",b3.author);
	printf("\n Number of pages : %d",b3.pages);
	printf("\n Price : %f",b3.price);
}